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

#include "LuaEventManager.h"
#include "base/CCDirector.h"

#include "ccUtils.h"
#include "base/CCEventDispatcher.h"

NS_CC_BEGIN

LuaEventManager* LuaEventManager::s_sharedLuaEventManager = nullptr;

LuaEventManager* LuaEventManager::getInstance()
{
    if (s_sharedLuaEventManager == nullptr)
    {
        s_sharedLuaEventManager = new (std::nothrow) LuaEventManager();
        if(!s_sharedLuaEventManager->init())
        {
            delete s_sharedLuaEventManager;
            s_sharedLuaEventManager = nullptr;
            CCLOG("ERROR: Could not init LuaEventManager");
        }
    }
    return s_sharedLuaEventManager;
}

void LuaEventManager::destroyInstance()
{
    CC_SAFE_DELETE(s_sharedLuaEventManager);
}

LuaEventManager::LuaEventManager()
{
    _luaNodes.reserve(100);
}

LuaEventManager::~LuaEventManager()
{
    // if (_running) {
    //     cleanup();
    // }
}

bool LuaEventManager::init()
{
    // _running = true;
    return true;
}

int LuaEventManager::addLuaEventListener(Node* node, int event, int listener, int tag /* = 0 */, int priority /* = 0 */)
{
    LuaEventNode *lnode = getLuaNodeByNode(node);
    if (!lnode)
    {
        lnode = LuaEventNode::create(node);
        if (!lnode)
        {
            return 0;
        }
    }
    int rn =  lnode->addScriptEventListener(event, listener, tag, priority);
    if (rn > 0)
    {
        _luaNodes.pushBack(lnode);
    }

    return rn;
}

LuaEventNode* LuaEventManager::getLuaNodeByNode(Node *node)
{
    LuaEventNode *lnode = nullptr;
    for (auto it = _luaNodes.begin(); it != _luaNodes.end(); ++it)
    {
        auto lt = (LuaEventNode *)*it;
        if (lt->getNode() == node)
        {
            lnode = lt;
            break;
        }
    }
    return lnode;
}

void LuaEventManager::removeLuaNode(LuaEventNode *lnode)
{
    _luaNodes.eraseObject(lnode);
}

NS_CC_END
