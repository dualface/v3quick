/****************************************************************************
Copyright (c) 2013-2014 Chukong Technologies Inc.

 http://www.cocos2d-x.org

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
 ****************************************************************************/

#include "LuaEventNode.h"


NS_CC_BEGIN

LuaEventNode *LuaEventNode::create(Node *node)
{
    LuaEventNode *lnode = new LuaEventNode(node);
    lnode->autorelease();
    return lnode;
}

LuaEventNode::LuaEventNode(Node *node)
//: _touchId(0)
{
    _node = node;
    _luaEventDispatcher = new LuaEventDispatcher();
}

LuaEventNode::~LuaEventNode()
{
    CC_SAFE_DELETE(_luaEventDispatcher);
}

Node *LuaEventNode::getNode()
{
    return  _node;
}

int LuaEventNode::addScriptEventListener(int event, int listener, int tag /* = 0 */, int priority /* = 0 */)
{
    return _luaEventDispatcher->addScriptEventListener(event, listener, tag, priority);
}

NS_CC_END
