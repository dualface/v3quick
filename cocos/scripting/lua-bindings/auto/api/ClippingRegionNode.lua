
--------------------------------
-- @module ClippingRegionNode
-- @extend Node
-- @parent_module cc

--------------------------------
-- @function [parent=#ClippingRegionNode] isClippingEnabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @function [parent=#ClippingRegionNode] setClippingEnabled 
-- @param self
-- @param #bool bool
        
--------------------------------
-- @function [parent=#ClippingRegionNode] getClippingRegion 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- @function [parent=#ClippingRegionNode] setClippingRegion 
-- @param self
-- @param #rect_table rect
        
--------------------------------
-- @overload self         
-- @overload self, rect_table         
-- @function [parent=#ClippingRegionNode] create
-- @param self
-- @param #rect_table rect
-- @return ClippingRegionNode#ClippingRegionNode ret (retunr value: cc.ClippingRegionNode)

--------------------------------
-- @function [parent=#ClippingRegionNode] visit 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table mat4
-- @param #unsigned int int
        
return nil
