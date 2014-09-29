require "Cocos2d"
require "Cocos2dConstants"
-- require "StudioConstants"

-- cclog
cclog = function(...)
    print(string.format(...))
end

-- for CCLuaEngine traceback
function __G__TRACKBACK__(msg)
    cclog("----------------------------------------")
    cclog("LUA ERROR: " .. tostring(msg) .. "\n")
    cclog(debug.traceback())
    cclog("----------------------------------------")
    return msg
end

local function main()
    collectgarbage("collect")
    -- avoid memory leak
    collectgarbage("setpause", 100)
    collectgarbage("setstepmul", 5000)

    cc.FileUtils:getInstance():addSearchPath("src")
    cc.FileUtils:getInstance():addSearchPath("res")

    -- require must after addSearchPath
    require("config")
	require("quick.init")
    require("quick.shortcodes")
    cc.mvc = require("quick.mvc.init")
    cc.ui = require("quick.ui.init")
    cc.uiloader = require("quick.uiloader.init")

 --    local function createTestLayer()
 --    	local layer = cc.Layer:create()

 --    	local sp = display.newSprite("GreenButton.png")
 --        sp:align(display.CENTER, display.cx, display.cy)
 --    	layer:addChild(sp)

 --        sp:addNodeEventListener(cc.NODE_TOUCH_EVENT, function(event)
 --            dump(event, "node event:")
 --            if "began" == event.name then
 --            else
 --            end
 --        end)

 --    	return layer
 --    end

 --    -- run
 --    local sceneGame = cc.Scene:create()
 --    sceneGame:addChild(createTestLayer())
	
	-- if cc.Director:getInstance():getRunningScene() then
	-- 	cc.Director:getInstance():replaceScene(sceneGame)
	-- else
	-- 	cc.Director:getInstance():runWithScene(sceneGame)
	-- end


    require("app.MyApp").new():run()

    -- require("appentry")
    
    -- require("game")
    -- game.startup()
end


local status, msg = xpcall(main, __G__TRACKBACK__)
if not status then
    error(msg)
end
