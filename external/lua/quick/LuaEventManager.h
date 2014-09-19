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

#ifndef __LUA_EVENT_MANAGER_H__
#define __LUA_EVENT_MANAGER_H__

#include <string>
#include <set>
#include "LuaEventNode.h"
#include "base/CCEventListenerTouch.h"
#include "platform/CCStdC.h"

NS_CC_BEGIN

class CC_DLL LuaEventManager : public Ref
{
public:
    /**
     *  The singleton pointer of LuaEventManager.
     */
    static LuaEventManager* s_sharedLuaEventManager;
    
    /** returns a shared instance of the LuaEventManager */
    static LuaEventManager* getInstance();
    
    /**
     *  Destroys the instance of LuaEventManager.
     */
    static void destroyInstance();

    int addLuaEventListener(Node* node, int event, int listener, int tag = 0, int priority = 0);
    void removeLuaEventListener(Node* node, int handle);
    void removeLuaEventListenersByEvent(Node* node, int event);
    void removeLuaEventListenersByTag(Node* node, int tag);
    void removeAllLuaEventListeners(Node* node);
    
    LuaEventNode* getLuaNodeByNode(Node *node);
    void removeLuaNode(LuaEventNode *lnode);
    
CC_CONSTRUCTOR_ACCESS:
    LuaEventManager();
     ~LuaEventManager();
    
    bool init();

protected:
    Vector<LuaEventNode*> _luaNodes;

};

// end of LuaEventManager group
/// @}

NS_CC_END

#endif // __LUA_EVENT_MANAGER_H__
