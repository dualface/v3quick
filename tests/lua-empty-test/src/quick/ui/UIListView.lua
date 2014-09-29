
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

quick 列表控件

]]

local UIScrollView = import(".UIScrollView")
local UIListView = class("UIListView", UIScrollView)

local UIListViewItem = import(".UIListViewItem")


UIListView.DELEGATE					= "ListView_delegate"
UIListView.TOUCH_DELEGATE			= "ListView_Touch_delegate"

UIListView.CELL_TAG					= "Cell"
UIListView.CELL_SIZE_TAG			= "CellSize"
UIListView.COUNT_TAG				= "Count"
UIListView.CLICKED_TAG				= "Clicked"

UIListView.BG_ZORDER 				= -1
UIListView.CONTENT_ZORDER			= 10

UIListView.ALIGNMENT_LEFT			= 0
UIListView.ALIGNMENT_RIGHT			= 1
UIListView.ALIGNMENT_VCENTER		= 2
UIListView.ALIGNMENT_TOP			= 3
UIListView.ALIGNMENT_BOTTOM			= 4
UIListView.ALIGNMENT_HCENTER		= 5

--[[--

UIListView构建函数

可用参数有：

-   direction 列表控件的滚动方向，默认为垂直方向
-   alignment listViewItem中content的对齐方式，默认为垂直居中
-   viewRect 列表控件的显示区域
-   scrollbarImgH 水平方向的滚动条
-   scrollbarImgV 垂直方向的滚动条
-   bgColor 背景色,nil表示无背景色
-   bgStartColor 渐变背景开始色,nil表示无背景色
-   bgEndColor 渐变背景结束色,nil表示无背景色
-   bg 背景图
-   bgScale9 背景图是否可缩放
-	capInsets 缩放区域


@param table params 参数表

]]
function UIListView:ctor(params)
	UIListView.super.ctor(self, params)

	self.items_ = {}
	self.direction = params.direction or UIScrollView.DIRECTION_VERTICAL
	self.alignment = params.alignment or UIListView.ALIGNMENT_VCENTER
	self.container = cc.Node:create()
	-- self.padding_ = params.padding or {left = 0, right = 0, top = 0, bottom = 0}

	-- params.viewRect.x = params.viewRect.x + self.padding_.left
	-- params.viewRect.y = params.viewRect.y + self.padding_.bottom
	-- params.viewRect.width = params.viewRect.width - self.padding_.left - self.padding_.right
	-- params.viewRect.height = params.viewRect.height - self.padding_.bottom - self.padding_.top

	self:setDirection(params.direction)
	self:setViewRect(params.viewRect)
	self:addScrollNode(self.container)
	self:onScroll(handler(self, self.scrollListener))

	self.size = {}
end

--[[--

列表控件触摸注册函数

@param function listener 触摸临听函数

@return UIListView self 自身

]]
function UIListView:onTouch(listener)
	self.touchListener_ = listener

	return self
end

--[[--

列表控件设置所有listItem中content的对齐方式

@param number align 对

@return UIListView self 自身

]]
function UIListView:setAlignment(align)
	self.alignment = align
end

--[[--

创建一个新的listViewItem项

@param node item 要放到listViewItem中的内容content

@return UIListViewItem

]]
function UIListView:newItem(item)
	item = UIListViewItem.new(item)
	item:setDirction(self.direction)
	item:onSizeChange(handler(self, self.itemSizeChangeListener))

	return item
end

function UIListView:itemSizeChangeListener(listItem, newSize, oldSize)
	local pos = self:getItemPos(listItem)
	if not pos then
		return
	end

	local itemW, itemH = newSize.width - oldSize.width, newSize.height - oldSize.height
	if UIScrollView.DIRECTION_VERTICAL == self.direction then
		itemW = 0
	else
		itemH = 0
	end

	local content = listItem:getContent()
	transition.moveBy(content,
				{x = itemW/2, y = itemH/2, time = 0.2})

	self.size.width = self.size.width + itemW
	self.size.height = self.size.height + itemH
	if UIScrollView.DIRECTION_VERTICAL == self.direction then
		transition.moveBy(self.container,
			{x = -itemW, y = -itemH, time = 0.2})
		self:moveItems(1, pos - 1, itemW, itemH, true)
	else
		self:moveItems(pos + 1, table.nums(self.items_), itemW, itemH, true)
	end
end

function UIListView:scrollListener(event)
	if "clicked" == event.name then
		local nodePoint = self.container:convertToNodeSpace(cc.p(event.x, event.y))
		nodePoint.x = nodePoint.x - self.viewRect_.x
		nodePoint.y = nodePoint.y - self.viewRect_.y

		local width, height = 0, self.size.height
		local itemW, itemH = 0, 0
		local pos
		if UIScrollView.DIRECTION_VERTICAL == self.direction then
			for i,v in ipairs(self.items_) do
				itemW, itemH = v:getItemSize()

				if nodePoint.y < height and nodePoint.y > height - itemH then
					pos = i
					nodePoint.y = nodePoint.y - (height - itemH)
					break
				end
				height = height - itemH
			end
		else
			for i,v in ipairs(self.items_) do
				itemW, itemH = v:getItemSize()

				if nodePoint.x > width and nodePoint.x < width + itemW then
					pos = i
					break
				end
				width = width + itemW
			end
		end

		self:notifyListener_{name = "clicked",
			listView = self, itemPos = pos, item = self.items_[pos],
			point = nodePoint}
	else
		event.scrollView = nil
		event.listView = self
		self:notifyListener_(event)
	end

end

--[[--

在列表项中添加一项

@param node listItem 要添加的项
@param [integer pos] 要添加的位置

@return UIListView

]]
function UIListView:addItem(listItem, pos)
	self:modifyItemSizeIf_(listItem)

	if pos then
		table.insert(self.items_, pos, listItem)
	else
		table.insert(self.items_, listItem)
	end
	self.container:addChild(listItem)

	return self
end

--[[--

在列表项中移除一项

@param node listItem 要移除的项
@param [boolean bAni] 是否要显示移除动画

@return UIListView

]]
function UIListView:removeItem(listItem, bAni)
	local itemW, itemH = listItem:getItemSize()
	self.container:removeChild(listItem)

	local pos = self:getItemPos(listItem)
	if pos then
		table.remove(self.items_, pos)
	end

	if UIScrollView.DIRECTION_VERTICAL == self.direction then
		itemW = 0
	else
		itemH = 0
	end

	self.size.width = self.size.width - itemW
	self.size.height = self.size.height - itemH
	if UIScrollView.DIRECTION_VERTICAL == self.direction then
		self:moveItems(1, pos - 1, -itemW, -itemH, bAni)
	else
		self:moveItems(pos, table.nums(self.items_), -itemW, -itemH, bAni)
	end

	return self
end

--[[--

取某项在列表控件中的位置

@param node listItem 列表项

@return integer

]]
function UIListView:getItemPos(listItem)
	for i,v in ipairs(self.items_) do
		if v == listItem then
			return i
		end
	end
end

--[[--

判断某项是否在列表控件的显示区域中

@param integer pos 列表项位置

@return boolean

]]
function UIListView:isItemInViewRect(pos)
	local item
	if "number" == type(pos) then
		item = self.items_[pos]
	elseif "userdata" == type(pos) then
		item = pos
	end

	if not item then
		return
	end
	
	local bound = item:getBoundingBox()
	local nodePoint = self.container:convertToWorldSpace(
		cc.p(bound.x, bound.y))
	bound.x = nodePoint.x
	bound.y = nodePoint.y

	return cc.rectIntersectsRect(self.viewRect_, bound)
end

function UIListView:layout_()
	local width, height = 0, 0
	local itemW, itemH = 0, 0
	local margin

	-- calcate whole width height
	if UIScrollView.DIRECTION_VERTICAL == self.direction then
		width = self.viewRect_.width

		for i,v in ipairs(self.items_) do
			itemW, itemH = v:getItemSize()
			itemW = itemW or 0
			itemH = itemH or 0

			height = height + itemH
		end
	else
		height = self.viewRect_.height

		for i,v in ipairs(self.items_) do
			itemW, itemH = v:getItemSize()
			itemW = itemW or 0
			itemH = itemH or 0

			width = width + itemW
		end
	end
	self:setActualRect({x = self.viewRect_.x,
		y = self.viewRect_.y,
		width = width,
		height = height})
	self.size.width = width
	self.size.height = height

	local setPositionByAlignment = function(content, w, h, margin)
		local size = content:getContentSize()
		if 0 == margin.left and 0 == margin.right and 0 == margin.top and 0 == margin.bottom then
			if UIScrollView.DIRECTION_VERTICAL == self.direction then
				if UIListView.ALIGNMENT_LEFT == self.alignment then
					content:setPosition(size.width/2, h/2)
				elseif UIListView.ALIGNMENT_RIGHT == self.alignment then
					content:setPosition(w - size.width/2, h/2)
				else
					content:setPosition(w/2, h/2)
				end
			else
				if UIListView.ALIGNMENT_TOP == self.alignment then
					content:setPosition(w/2, h - size.height/2)
				elseif UIListView.ALIGNMENT_RIGHT == self.alignment then
					content:setPosition(w/2, size.height/2)
				else
					content:setPosition(w/2, h/2)
				end
			end
		else
			local posX, posY
			if 0 ~= margin.right then
				posX = w - margin.right - size.width/2
			else
				posX = size.width/2 + margin.left
			end
			if 0 ~= margin.top then
				posY = h - margin.top - size.height/2
			else
				posY = size.height/2 + margin.bottom
			end
			content:setPosition(posX, posY)
		end
	end

	local tempWidth, tempHeight = width, height
	if UIScrollView.DIRECTION_VERTICAL == self.direction then
		itemW, itemH = 0, 0

		local content
		for i,v in ipairs(self.items_) do
			itemW, itemH = v:getItemSize()
			itemW = itemW or 0
			itemH = itemH or 0

			tempHeight = tempHeight - itemH
			content = v:getContent()
			content:setAnchorPoint(0.5, 0.5)
			-- content:setPosition(itemW/2, itemH/2)
			setPositionByAlignment(content, itemW, itemH, v:getMargin())
			v:setPosition(self.viewRect_.x,
				self.viewRect_.y + tempHeight)
		end
	else
		itemW, itemH = 0, 0
		tempWidth = 0

		for i,v in ipairs(self.items_) do
			itemW, itemH = v:getItemSize()
			itemW = itemW or 0
			itemH = itemH or 0

			content = v:getContent()
			content:setAnchorPoint(0.5, 0.5)
			-- content:setPosition(itemW/2, itemH/2)
			setPositionByAlignment(content, itemW, itemH, v:getMargin())
			v:setPosition(self.viewRect_.x + tempWidth, self.viewRect_.y)
			tempWidth = tempWidth + itemW
		end
	end

	self.container:setPosition(0, self.viewRect_.height - self.size.height)
end

--[[--

加载列表

@return UIListView

]]
function UIListView:reload()
	self:layout_()

	return self
end

function UIListView:notifyItem(point)
	local count = self.listener[UIListView.DELEGATE](self, UIListView.COUNT_TAG)
	local temp = (self.direction == UIListView.DIRECTION_VERTICAL and self.container:getContentSize().height) or 0
	local w,h = 0, 0
	local tag = 0

	for i = 1, count do
		w,h = self.listener[UIListView.DELEGATE](self, UIListView.CELL_SIZE_TAG, i)
		if self.direction == UIListView.DIRECTION_VERTICAL then
			temp = temp - h
			if point.y > temp then
				point.y = point.y - temp
				tag = i
				break
			end
		else
			temp = temp + w
			if point.x < temp then
				point.x = point.x + w - temp
				tag = i
				break
			end
		end
	end

	if 0 == tag then
		printInfo("UIListView - didn't found item")
		return
	end

	local item = self.container:getChildByTag(tag)
	self.listener[UIListView.DELEGATE](self, UIListView.CLICKED_TAG, tag, point)
end

function UIListView:moveItems(beginIdx, endIdx, x, y, bAni)
	if 0 == endIdx then
		self:elasticScroll()
	end

	local posX, posY = 0, 0

	local moveByParams = {x = x, y = y, time = 0.2}
	for i=beginIdx, endIdx do
		if bAni then
			if i == beginIdx then
				moveByParams.onComplete = function()
					self:elasticScroll()
				end
			else
				moveByParams.onComplete = nil
			end
			transition.moveBy(self.items_[i], moveByParams)
		else
			posX, posY = self.items_[i]:getPosition()
			self.items_[i]:setPosition(posX + x, posY + y)
			if i == beginIdx then
				self:elasticScroll()
			end
		end
	end
end

function UIListView:notifyListener_(event)
	if not self.touchListener_ then
		return
	end

	self.touchListener_(event)
end

function UIListView:modifyItemSizeIf_(item)
	local w, h = item:getItemSize()

	if UIScrollView.DIRECTION_VERTICAL == self.direction then
		if w ~= self.viewRect_.width then
			item:setItemSize(self.viewRect_.width, h, true)
		end
	else
		if h ~= self.viewRect_.height then
			item:setItemSize(w, self.viewRect_.height, true)
		end
	end
end

function UIListView:update_(dt)
	UIListView.super.update_(self, dt)

	self:checkItemsInStatus_()
end

function UIListView:checkItemsInStatus_()
	if not self.itemInStatus_ then
		self.itemInStatus_ = {}
	end

	local rectIntersectsRect = function(rectParent, rect)
		-- dump(rectParent, "parent:")
		-- dump(rect, "rect:")

		local nIntersects -- 0:no intersects,1:have intersects,2,have intersects and include totally
		local bIn = rectParent.x <= rect.x and
				rectParent.x + rectParent.width >= rect.x + rect.width and
				rectParent.y <= rect.y and
				rectParent.y + rectParent.height >= rect.y + rect.height
		if bIn then
			nIntersects = 2
		else
			local bNotIn = rectParent.x > rect.x + rect.width or
				rectParent.x + rectParent.width < rect.x or
				rectParent.y > rect.y + rect.height or
				rectParent.y + rectParent.height < rect.y
			if bNotIn then
				nIntersects = 0
			else
				nIntersects = 1
			end
		end

		return nIntersects
	end

	local newStatus = {}
	local bound
	local nodePoint
	for i,v in ipairs(self.items_) do
		bound = v:getBoundingBox()
		nodePoint = self.container:convertToWorldSpace(cc.p(bound.x, bound.y))
		bound.x = nodePoint.x
		bound.y = nodePoint.y
		newStatus[i] =
			rectIntersectsRect(self.viewRect_, bound)
	end

	-- dump(self.itemInStatus_, "status:")
	-- dump(newStatus, "newStatus:")
	for i,v in ipairs(newStatus) do
		if self.itemInStatus_[i] and self.itemInStatus_[i] ~= v then
			-- print("statsus:" .. self.itemInStatus_[i] .. " v:" .. v)
			local params = {listView = self,
							itemPos = i,
							item = self.items_[i]}
			if 0 == v then
				params.name = "itemDisappear"
			elseif 1 == v then
				params.name = "itemAppearChange"
			elseif 2 == v then
				params.name = "itemAppear"
			end
			self:notifyListener_(params)
		else
			-- print("status same:" .. self.itemInStatus_[i])
		end
	end
	self.itemInStatus_ = newStatus
	-- dump(self.itemInStatus_, "status:")
	-- print("itemStaus:" .. #self.itemInStatus_)
end

return UIListView
