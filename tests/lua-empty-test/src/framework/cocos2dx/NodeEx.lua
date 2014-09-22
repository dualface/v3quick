--[[

Copyright (c) 2011-2014 chukong-inc.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

]]

--[[--

针对 cc.Node 的扩展

]]

local c = cc
local Node = c.Node

-- touch
c.TouchesAllAtOnce              = cc.TOUCHES_ALL_AT_ONCE
c.TouchesOneByOne               = cc.TOUCHES_ONE_BY_ONE
c.TOUCH_MODE_ALL_AT_ONCE        = c.TouchesAllAtOnce
c.TOUCH_MODE_ONE_BY_ONE         = c.TouchesOneByOne

local function isPointIn( rc, pt )
    local rect = cc.rect(rc.x, rc.y, rc.width, rc.height)
    return cc.rectContainsPoint(rect, pt)
end

function Node:align(anchorPoint, x, y)
    self:setAnchorPoint(display.ANCHOR_POINTS[anchorPoint])
    if x and y then self:setPosition(x, y) end
    return self
end

function Node:schedule(callback, interval)
    local seq = transition.sequence({
        cc.DelayTime:create(interval),
        cc.CallFunc:create(callback),
    })
    local action = cc.RepeatForever:create(seq)
    self:runAction(action)
    return action
end

function Node:performWithDelay(callback, delay)
    local action = transition.sequence({
        cc.DelayTime:create(delay),
        cc.CallFunc:create(callback),
    })
    self:runAction(action)
    return action
end

function Node:getCascadeBoundingBox()
    local rc
    local func = tolua.getcfunction(self, "getCascadeBoundingBox")
    if func then
        rc = func(self)
    end

    rc.origin = {x=rc.x, y=rc.y}
    rc.size = {width=rc.width, height=rc.height}
    rc.containsPoint = isPointIn
    return rc
end

function Node:removeSelf()
    self:removeFromParent(true)
end

function Node:onEnter()
end

function Node:onExit()
end

function Node:onEnterTransitionFinish()
end

function Node:onExitTransitionStart()
end

function Node:onCleanup()
end

function Node:setNodeEventEnabled(enabled, listener)
    if enabled then
        if self.__node_event_handle__ then
            self:removeNodeEventListener(self.__node_event_handle__)
            self.__node_event_handle__ = nil
        end

        if not listener then
            listener = function(event)
                local name = event.name
                if name == "enter" then
                    self:onEnter()
                elseif name == "exit" then
                    self:onExit()
                elseif name == "enterTransitionFinish" then
                    self:onEnterTransitionFinish()
                elseif name == "exitTransitionStart" then
                    self:onExitTransitionStart()
                elseif name == "cleanup" then
                    self:onCleanup()
                end
            end
        end
        self.__node_event_handle__ = self:addNodeEventListener(c.NODE_EVENT, listener)
    elseif self.__node_event_handle__ then
        self:removeNodeEventListener(self.__node_event_handle__)
        self.__node_event_handle__ = nil
    end
    return self
end

function Node:setKeypadEnabled(enable)
    self:setKeyboardEnabled(enable)
end

function Node:isKeypadEnabled()
    return self:isKeyboardEnabled()
end

function Node:addNodeEventListener( evt, hdl, tag, priority )
    priority = priority or 0

    if not self._scriptEventListeners_ then
        self._scriptEventListeners_ = {}

        local function baseNodeEventListener( evt )
            print('----base Node Event: ' .. evt .. '(' .. tostring(self) .. ')')
            self:EventDispatcher(c.NODE_EVENT, evt)
        end

        self:registerScriptHandler(baseNodeEventListener)
    end
    local luaListeners_ = self._scriptEventListeners_

    local idx = self._nextScriptEventHandleIndex_ or 0
    idx = idx + 1
    self._nextScriptEventHandleIndex_ = idx

    if not luaListeners_[evt] then
        luaListeners_[evt] = {}
    end
    local eventListeners_ = luaListeners_[evt]
    local lis = {
            index_ = idx,
            listener_ = hdl,
            tag_ = tag,
            priority_ = priority,
            enable_ = true,
        }
    if evt==c.NODE_ENTER_FRAME_EVENT then
        eventListeners_[1] = lis
    else
        table.insert(eventListeners_, lis)
    end

    if evt==c.NODE_ENTER_FRAME_EVENT then
            local listener = function (dt)
                self:EventDispatcher(self, c.NODE_ENTER_FRAME_EVENT, dt)
            end
            self:scheduleUpdateWithPriorityLua(listener, priority) 
    elseif evt==c.KEYPAD_EVENT then
        local onKeyPressed = function ( keycode, event )
            return self:EventDispatcher(event:getCurrentTarget(), c.KEYPAD_EVENT, {keycode, event, "Pressed"})
        end

        local onKeyReleased = function ( keycode, event )
            return self:EventDispatcher(event:getCurrentTarget(), c.KEYPAD_EVENT, {keycode, event, "Released"})
        end

        local listener = cc.EventListenerKeyboard:create()
        listener:registerScriptHandler(onKeyPressed, cc.Handler.EVENT_KEYBOARD_PRESSED )
        listener:registerScriptHandler(onKeyReleased, cc.Handler.EVENT_KEYBOARD_RELEASED )
        local eventDispatcher = self:getEventDispatcher()
        eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self)
        lis.regHanler = listener
        lis.regHanler:retain()
    else
        self:addLuaEventListener( evt, hdl, tag, priority ) 
    end

    return self._nextScriptEventHandleIndex_
end

local function KeypadEventCodeConvert( code )
    return tostring(code)
end

function Node:EventDispatcher( idx, data )
    print("-----Entry Node:EventDispatcher: "..idx)
    local obj = self
    local flagNodeCleanup = false
    local event
    if idx==c.NODE_EVENT then
        event = { name=data }
        if data=="cleanup" then
            flagNodeCleanup = true
        end
    elseif idx==c.NODE_ENTER_FRAME_EVENT then
        event = data
    elseif idx==c.KEYPAD_EVENT then
        local code = data[1]
        -- local evt = data[2]
        local ename = data[3]
        if ename~='Released' then return true end
        event = { code=code, key=KeypadEventCodeConvert(code), }
    else
        return false
    end

    local rnval = false
    if obj._scriptEventListeners_ and obj._scriptEventListeners_[idx] then
        for i,v in ipairs(obj._scriptEventListeners_[idx]) do
            rnval = rnval or v.listener_(event)
        end
    end

    -- if flagNodeCleanup then obj:removeAllNodeEventListeners() end

    return rnval
end