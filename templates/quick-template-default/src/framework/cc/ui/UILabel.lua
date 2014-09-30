
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

quick UILabel控件

]]

local UILabel
UILabel = class("UILabel", function(options)
	if not options then
		return
	end

	if 1 == options.UILabelType then
		return UILabel.newBMFontLabel_(options)
	elseif not options.UILabelType or 2 == options.UILabelType then
		return UILabel.newTTFLabel_(options)
	elseif 3 == options.UILabelType then
		return UILabel.newTTFLabelWithShadow_(options)
	elseif 4 == options.UILabelType then
		return UILabel.newTTFLabelWithOutline_(options)
	else
		printInfo("UILabel unkonw UILabelType")
	end
end)

UILabel.DEFAULT_TTF_FONT      = "Arial"
UILabel.DEFAULT_TTF_FONT_SIZE = 24

UILabel.TEXT_ALIGN_LEFT    = cc.TEXT_ALIGNMENT_LEFT
UILabel.TEXT_ALIGN_CENTER  = cc.TEXT_ALIGNMENT_CENTER
UILabel.TEXT_ALIGN_RIGHT   = cc.TEXT_ALIGNMENT_RIGHT
UILabel.TEXT_VALIGN_TOP    = cc.VERTICAL_TEXT_ALIGNMENT_TOP
UILabel.TEXT_VALIGN_CENTER = cc.VERTICAL_TEXT_ALIGNMENT_CENTER
UILabel.TEXT_VALIGN_BOTTOM = cc.VERTICAL_TEXT_ALIGNMENT_BOTTOM

UILabel.LABEL_TYPE_BM					= 1
UILabel.LABEL_TYPE_TTF 					= 2
UILabel.LABEL_TYPE_TTF_WITH_SHADOW		= 3
UILabel.LABEL_TYPE_TTF_WITH_OUTLINE		= 4


--[[--

UILabel构建函数

@param table options 参数表

]]
function UILabel:ctor(options)
    makeUIControl_(self)
    self:setLayoutSizePolicy(display.FIXED_SIZE, display.FIXED_SIZE)

    self:align(self:getAlign(options) or display.LEFT_CENTER)
end

--[[--

UILabel设置控件大小

@param number width 宽度
@param number height 高度

@return UILabel 自身

]]
function UILabel:setLayoutSize(width, height)
    self:getComponent("components.ui.LayoutProtocol"):setLayoutSize(width, height)
    return self
end


-- private

function UILabel:getAlign(options)
    if not options then
        return
    end

    if 1 == options.UILabelType then
        if UILabel.TEXT_ALIGN_CENTER == options.align then
            return display.CENTER
        elseif UILabel.TEXT_ALIGN_LEFT == options.align then
            return display.LEFT_CENTER
        else
            return display.RIGHT_CENTER
        end
    else
        if UILabel.TEXT_ALIGN_RIGHT == options.align then
            if UILabel.TEXT_VALIGN_TOP == options.valign then
                return display.RIGHT_TOP
            elseif UILabel.TEXT_VALIGN_BOTTOM == options.valign then
                return display.RIGHT_BOTTOM
            else
                return display.RIGHT_CENTER
            end
        elseif UILabel.TEXT_ALIGN_CENTER == options.align then
            if UILabel.TEXT_VALIGN_TOP == options.valign then
                return display.CENTER_TOP
            elseif UILabel.TEXT_VALIGN_BOTTOM == options.valign then
                return display.CENTER_BOTTOM
            else
                return display.CENTER
            end
        else
            if UILabel.TEXT_VALIGN_TOP == options.valign then
                return display.LEFT_TOP
            elseif UILabel.TEXT_VALIGN_BOTTOM == options.valign then
                return display.LEFT_BOTTOM
            else
                return display.LEFT_CENTER
            end
        end
    end
end

--[[--

用位图字体创建文本显示对象，并返回 LabelBMFont 对象。

BMFont 通常用于显示英文内容，因为英文字母加数字和常用符号也不多，生成的 BMFont 文件较小。如果是中文，应该用 TTFLabel。

可用参数：

-    text: 要显示的文本
-    font: 字体文件名
-    align: 文字的水平对齐方式（可选）
-    x, y: 坐标（可选）

~~~ lua

local label = UILabel:newBMFontLabel({
    text = "Hello",
    font = "UIFont.fnt",
})

~~~

@param table params 参数表格对象

@return LabelBMFont LabelBMFont对象

]]
function UILabel.newBMFontLabel_(params)
    assert(type(params) == "table",
           "[framework.cc.ui.UILabel] newBMFontLabel_() invalid params")

    local text      = tostring(params.text)
    local font      = params.font
    local textAlign = params.align or UILabel.TEXT_ALIGN_CENTER
    local x, y      = params.x, params.y
    assert(font ~= nil, "framework.cc.ui.UILabel.newBMFontLabel_() - not set font")

    local label = cc.LabelBMFont:create(text, font, cc.LABEL_AUTOMATIC_WIDTH, textAlign)
    if not label then return end

    if type(x) == "number" and type(y) == "number" then
        label:setPosition(x, y)
    end

    if textAlign == UILabel.TEXT_ALIGN_LEFT then
        label:align(display.LEFT_CENTER)
    elseif textAlign == UILabel.TEXT_ALIGN_RIGHT then
        label:align(display.RIGHT_CENTER)
    else
        label:align(display.CENTER)
    end

    return label
end

--[[--

使用 TTF 字体创建文字显示对象，并返回 LabelTTF 对象。

可用参数：

-    text: 要显示的文本
-    font: 字体名，如果是非系统自带的 TTF 字体，那么指定为字体文件名
-    size: 文字尺寸，因为是 TTF 字体，所以可以任意指定尺寸
-    color: 文字颜色（可选），用 cc.c3b() 指定，默认为白色
-    align: 文字的水平对齐方式（可选）
-    valign: 文字的垂直对齐方式（可选），仅在指定了 dimensions 参数时有效
-    dimensions: 文字显示对象的尺寸（可选），使用 cc.size() 指定
-    x, y: 坐标（可选）

align 和 valign 参数可用的值：

-    UILabel.TEXT_ALIGN_LEFT 左对齐
-    UILabel.TEXT_ALIGN_CENTER 水平居中对齐
-    UILabel.TEXT_ALIGN_RIGHT 右对齐
-    UILabel.TEXT_VALIGN_TOP 垂直顶部对齐
-    UILabel.TEXT_VALIGN_CENTER 垂直居中对齐
-    UILabel.TEXT_VALIGN_BOTTOM 垂直底部对齐

~~~ lua

-- 创建一个居中对齐的文字显示对象
local label = UILabel:newTTFLabel({
    text = "Hello, World",
    font = "Marker Felt",
    size = 64,
    align = UILabel.TEXT_ALIGN_CENTER -- 文字内部居中对齐
})

-- 左对齐，并且多行文字顶部对齐
local label = UILabel:newTTFLabel({
    text = "Hello, World\n您好，世界",
    font = "Arial",
    size = 64,
    color = cc.c3b(255, 0, 0), -- 使用纯红色
    align = UILabel.TEXT_ALIGN_LEFT,
    valign = UILabel.TEXT_VALIGN_TOP,
    dimensions = cc.size(400, 200)
})

~~~

@param table params 参数表格对象

@return LabelTTF LabelTTF对象

]]
function UILabel.newTTFLabel_(params)
    assert(type(params) == "table",
           "[framework.cc.ui.UILabel] newTTFLabel_() invalid params")

    local text       = tostring(params.text)
    local font       = params.font or UILabel.DEFAULT_TTF_FONT
    local size       = params.size or UILabel.DEFAULT_TTF_FONT_SIZE
    local color      = params.color or display.COLOR_WHITE
    local textAlign  = params.align or UILabel.TEXT_ALIGN_LEFT
    local textValign = params.valign or UILabel.TEXT_VALIGN_CENTER
    local x, y       = params.x, params.y
    local dimensions = params.dimensions

    assert(type(size) == "number",
           "[framework.cc.ui.UILabel] newTTFLabel_() invalid params.size")

    local label
    if cc.FileUtils:getInstance():isFileExist(font) then
        if dimensions then
            label = cc.Label:createWithTTF(text, font, size, dimensions, textAlign, textValign)
        else
            label = cc.Label:createWithTTF(text, font, size)
        end
    else
        if dimensions then
            label = cc.LabelTTF:create(text, font, size, dimensions, textAlign, textValign)
        else
            label = cc.LabelTTF:create(text, font, size)
        end
    end

    if label then
        label:setColor(color)
        if x and y then label:setPosition(x, y) end
    end

    return label
end

--[[--

创建带阴影的 TTF 文字显示对象，并返回 LabelTTF 对象。

相比 UILabel.newTTFLabel() 增加一个参数：

-   shadowColor: 阴影颜色（可选），用 cc.c3b() 指定，默认为黑色

@param table params 参数表格对象

@return LabelTTF LabelTTF对象

]]
function UILabel.newTTFLabelWithShadow_(params)
    assert(type(params) == "table",
           "[framework.cc.ui.UILabel] newTTFLabelWithShadow_() invalid params")

    local color       = params.color or display.COLOR_WHITE
    local shadowColor = params.shadowColor or display.COLOR_BLACK
    local x, y        = params.x, params.y

    local g = display.newNode()
    params.size = params.size
    params.color = shadowColor
    params.x, params.y = 0, 0
    g.shadow1 = self:newTTFLabel(params)
    local offset = 1 / (display.widthInPixels / display.width)
    g.shadow1:realign(offset, -offset)
    g:addChild(g.shadow1)

    params.color = color
    g.label = self:newTTFLabel(params)
    g.label:realign(0, 0)
    g:addChild(g.label)

    function g:setString(text)
        g.shadow1:setString(text)
        g.label:setString(text)
    end

    function g:realign(x, y)
        g:setPosition(x, y)
    end

    function g:getContentSize()
        return g.label:getContentSize()
    end

    function g:setColor(...)
        g.label:setColor(...)
    end

    function g:setShadowColor(...)
        g.shadow1:setColor(...)
    end

    function g:setOpacity(opacity)
        g.label:setOpacity(opacity)
        g.shadow1:setOpacity(opacity)
    end

    if x and y then
        g:setPosition(x, y)
    end

    return g
end

--[[--

创建带描边效果的 TTF 文字显示对象，并返回 LabelTTF 对象。

相比 UILabel.newTTFLabel() 增加一个参数：

    outlineColor: 描边颜色（可选），用 cc.c3b() 指定，默认为黑色

@param table params 参数表格对象

@return LabelTTF LabelTTF对象

]]
function UILabel.newTTFLabelWithOutline_(params)
    assert(type(params) == "table",
           "[framework.cc.ui.UILabel] newTTFLabelWithOutline_() invalid params")

    local color        = params.color or display.COLOR_WHITE
    local outlineColor = params.outlineColor or display.COLOR_BLACK
    local x, y         = params.x, params.y

    local g = display.newNode()
    params.size  = params.size
    params.color = outlineColor
    params.x, params.y = 0, 0
    g.shadow1 = self:newTTFLabel(params)
    g.shadow1:realign(1, 0)
    g:addChild(g.shadow1)
    g.shadow2 = self:newTTFLabel(params)
    g.shadow2:realign(-1, 0)
    g:addChild(g.shadow2)
    g.shadow3 = self:newTTFLabel(params)
    g.shadow3:realign(0, -1)
    g:addChild(g.shadow3)
    g.shadow4 = self:newTTFLabel(params)
    g.shadow4:realign(0, 1)
    g:addChild(g.shadow4)

    params.color = color
    g.label = self:newTTFLabel(params)
    g.label:realign(0, 0)
    g:addChild(g.label)

    function g:setString(text)
        g.shadow1:setString(text)
        g.shadow2:setString(text)
        g.shadow3:setString(text)
        g.shadow4:setString(text)
        g.label:setString(text)
    end

    function g:getContentSize()
        return g.label:getContentSize()
    end

    function g:setColor(...)
        g.label:setColor(...)
    end

    function g:setOutlineColor(...)
        g.shadow1:setColor(...)
        g.shadow2:setColor(...)
        g.shadow3:setColor(...)
        g.shadow4:setColor(...)
    end

    function g:setOpacity(opacity)
        g.label:setOpacity(opacity)
        g.shadow1:setOpacity(opacity)
        g.shadow2:setOpacity(opacity)
        g.shadow3:setOpacity(opacity)
        g.shadow4:setOpacity(opacity)
    end

    if x and y then
        g:setPosition(x, y)
    end

    return g
end

return UILabel
