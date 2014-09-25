
local MainScene = class("MainScene", function()
    return display.newScene("MainScene")
end)

function MainScene:ctor()
    cc.ui.UILabel.new({
            UILabelType = 2, text = "Hello, World", size = 64, align = cc.ui.TEXT_ALIGN_CENTER})
        :pos(display.cx, display.cy)
        :addTo(self)
end

function MainScene:onEnterFrame(dt)
	-- print("dt:", dt)
end

function MainScene:onEnter()
    self:addNodeEventListener(cc.NODE_ENTER_FRAME_EVENT, function(dt) self:onEnterFrame(dt) end)
    self:scheduleUpdate()

	self:addNodeEventListener(cc.KEYPAD_EVENT, function(event)
        print("*******KEYPAD_EVENT*******")
        dump(event)
                -- if event.key == "back" then
                --   app.exit()
                -- end
        self:unscheduleUpdate()
        self:setKeypadEnabled(false)
        end)
	self:setKeypadEnabled(true)

	self:addNodeEventListener(cc.NODE_TOUCH_EVENT, function(event)
        print("*******NODE_TOUCH_EVENT*******")
        dump(event)
                -- if event.key == "back" then
                --   app.exit()
                -- end
        return true
        end)
	self:setTouchEnabled(true)
end

function MainScene:onExit()
end

return MainScene
