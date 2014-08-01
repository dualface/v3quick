
require("config")
require("framework.init")

local MyApp = class("MyApp", cc.mvc.AppBase)

function MyApp:ctor()
    MyApp.super.ctor(self)
    self.scenes_ = {
        "CCSSample1Scene",
        "CCSSample2Scene",
        "CCSSample3Scene",
        "CCSSample4Scene",
    }
end

function MyApp:run()
    cc.FileUtils:getInstance():addSearchPath("res/")

    self:enterNextScene()
end

function MyApp:enterScene(sceneName, ...)
    self.currentSceneName_ = sceneName
    MyApp.super.enterScene(self, sceneName, ...)
end

function MyApp:enterNextScene()
    local index = 1
    while index <= #self.scenes_ do
        if self.scenes_[index] == self.currentSceneName_ then
            break
        end
        index = index + 1
    end
    index = index + 1
    if index > #self.scenes_ then index = 1 end
    self:enterScene(self.scenes_[index])
end

function MyApp:createTitle(scene, title)
    cc.ui.UILabel.new({text = "-- " .. title .. " --", size = 24, color = display.COLOR_WHITE})
        :align(display.CENTER, display.cx, display.top - 20)
        :addTo(scene)
end

function MyApp:createNextButton(scene)
    cc.ui.UIPushButton.new("NextButton.png")
        :onButtonPressed(function(event)
            event.target:setScale(1.2)
        end)
        :onButtonRelease(function(event)
            event.target:setScale(1.0)
        end)
        :onButtonClicked(function(event)
            self:enterNextScene()
        end)
        :align(display.RIGHT_BOTTOM, display.right - 20, display.bottom + 20)
        :addTo(scene)
end

function MyApp:loadCCSJsonFile(scene, jsonFile)
    local node = cc.uiloader:load(jsonFile)
    if node then
        node:setPosition((display.width - 480)/2, (display.height - 320)/2)
        -- node:setPosition(0, 0)
        scene:addChild(node)
    end
end

return MyApp
