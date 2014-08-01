
local uiloader = class("uiloader")
local ccsloader = import(".ccsloader")

function uiloader:ctor()
end

function uiloader:load(jsonFile)
	return ccsloader:load(jsonFile)
end

function uiloader:seekNodeByTag(parent, tag)
	if not parent then
		return
	end

	if tag == parent:getTag() then
		return parent
	end

	local findNode
	for i,v in ipairs(parent:getChildren()) do
		findNode = self:seekNodeByTag(v, tag)
		if findNode then
			return findNode
		end
	end

	return
end

return uiloader
