
--------------------------------
-- @module ClippingRectangleNode
-- @extend Node
-- @parent_module cc

--------------------------------
-- @function [parent=#ClippingRectangleNode] isClippingEnabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#ClippingRectangleNode] setClippingEnabled 
-- @param self
-- @param #bool bool
        
--------------------------------
-- @function [parent=#ClippingRectangleNode] getClippingRegion 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- @function [parent=#ClippingRectangleNode] setClippingRegion 
-- @param self
-- @param #rect_table rect
        
--------------------------------
-- @overload self         
-- @overload self, rect_table         
-- @function [parent=#ClippingRectangleNode] create
-- @param self
-- @param #rect_table rect
-- @return ClippingRectangleNode#ClippingRectangleNode ret (retunr value: cc.ClippingRectangleNode)

--------------------------------
-- @function [parent=#ClippingRectangleNode] visit 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table mat4
-- @param #unsigned int int
        
return nil
