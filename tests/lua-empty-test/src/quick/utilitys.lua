
function dumpUITree(node)
    if not node then
        return
    end

    local treeTable = {}
    local treeDepth = 1

    local getPreSymbol = function(depth)
        local t = {"+"}
        for i=1,depth do
            table.insert(t, "----")
        end
        return table.concat(t)
    end

    local getNodePropertyStr = function(node, depth)
        table.insert(treeTable, "")
        table.insert(treeTable, getPreSymbol(depth) .. string.format("Name:%s", node.name))
        table.insert(treeTable, getPreSymbol(depth) .. string.format("Tag:%d", node:getTag()))
        table.insert(treeTable, getPreSymbol(depth) .. string.format("ZOrder local:%d, global:%d", node:getLocalZOrder(), node:getGlobalZOrder()))
        table.insert(treeTable, getPreSymbol(depth) .. string.format("Position:(%d, %d)", node:getPositionX(), node:getPositionY()))
        local size = node:getContentSize()
        table.insert(treeTable, getPreSymbol(depth) .. string.format("Size:(%d, %d)", size.width, size.height))
        table.insert(treeTable, getPreSymbol(depth) .. string.format("Scale:(%f, %f)", node:getScaleX(), node:getScaleY()))
        local anchor = node:getAnchorPoint()
        table.insert(treeTable, getPreSymbol(depth) .. string.format("Anchor:(%f, %f)", anchor.x, anchor.y))
        table.insert(treeTable, getPreSymbol(depth) .. "Visible:" .. tostring(node:isVisible()))
        table.insert(treeTable, getPreSymbol(depth) .. string.format("ChildCount:%d", node:getChildrenCount()))
    end

    local dumpUINode
    dumpUINode = function(node, depth)
        if not node then
            return
        end

        if not node:isVisible() then
            return
        end

        getNodePropertyStr(node, depth)

        -- children
        local children = node:getChildren()
        local childCount = node:getChildrenCount()
        local subNode
        for i=1, childCount do
            if "table" == type(children) then
                subNode = children[i]
            else
                subNode = children:objectAtIndex(i - 1)
            end
            dumpUINode(subNode, depth + 1)
        end
    end

    dumpUINode(node, 1)

    print("UINodeTree:\n" .. table.concat(treeTable, "\n"))
end

function drawUIRegion(node, scene, nRecursion)
    local param = {borderWidth = 1}
    if "number" ~= type(nRecursion) then
        nRecursion = 1
    end

    local drawNodeRegion
    drawNodeRegion = function(node)
        if not node then
            return
        end

        local rect = node:getContentSize()
        local worldPoint = node:convertToWorldSpace(cc.p(0, 0))
        rect.x = worldPoint.x
        rect.y = worldPoint.y
        param.borderColor = cc.c4f(math.random(), math.random(), math.random(), 1)
        local nodeRect = display.newRect(rect, param)
        scene:addChild(nodeRect)

        if nRecursion < 2 then
            return
        end
        nRecursion = nRecursion - 1

        -- children
        local children = node:getChildren()
        local childCount = node:getChildrenCount()
        local subNode
        for i=1, childCount do
            if "table" == type(children) then
                subNode = children[i]
            else
                subNode = children:objectAtIndex(i - 1)
            end
            drawNodeRegion(subNode)
        end
    end

    drawNodeRegion(node)
end

function showLuaMemoryContinuous()
    local scheduler = require("framework.scheduler")
    if showLuaSchedule then
        return
    end

    local showLuaMemory = function ()
        local KByteUseLua = collectgarbage("count")
        print("luaM:" .. KByteUseLua .. " K")
    end

    showLuaSchedule = scheduler.scheduleGlobal(showLuaMemory, 3)
end
