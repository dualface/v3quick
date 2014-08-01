
local CCSSample4Scene = class("CCSSample4Scene", function()
    return display.newScene("CCSSample4Scene")
end)

function CCSSample4Scene:ctor()
	app:createTitle(self, "CCS Sample4")
	app:createNextButton(self)

	app:loadCCSJsonFile(self, "DemoShop.ExportJson")
	local shopView = cc.uiloader:seekNodeByTag(self, 66)
	shopView:onScroll(function(event)
		print("CCSSample4Scene shop scroll")
		-- dump(event, "event:")
	end)

	local rankView = cc.uiloader:seekNodeByTag(self, 8)
	rankView:onScroll(function(event)
		print("CCSSample4Scene rank scroll")
		-- dump(event, "event:")
	end)
end

return CCSSample4Scene
