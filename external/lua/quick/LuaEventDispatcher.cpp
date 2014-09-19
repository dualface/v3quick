/****************************************************************************
Copyright (c) 2010-2012 cocos2d-x.org

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

#include <algorithm>

#include "LuaEventDispatcher.h"
#include "base/CCScriptSupport.h"

NS_CC_BEGIN

int LuaEventDispatcher::s_nextScriptEventHandleIndex = 0;

LuaEventDispatcher::LuaEventDispatcher()
    : m_scriptEventListeners(NULL)
{
}

LuaEventDispatcher::~LuaEventDispatcher()
{
    if (m_scriptEventListeners)
    {
        removeAllScriptEventListeners();
        m_scriptEventListeners->clear();
        delete m_scriptEventListeners;
    }
}

int LuaEventDispatcher::addScriptEventListener(int event, int listener, int tag /* = 0 */, int priority /* = 0 */)
{
    if (!m_scriptEventListeners)
    {
        m_scriptEventListeners = new LuaEventListenersForEvent(10);
    }

    s_nextScriptEventHandleIndex++;
    m_scriptEventListeners->pushBack(LuaHandlePair::create(s_nextScriptEventHandleIndex, event, listener, tag));

    return s_nextScriptEventHandleIndex;
}

void LuaEventDispatcher::removeScriptEventListener(int handle)
{
    if (!m_scriptEventListeners) return;

    ScriptEngineProtocol *engine = ScriptEngineManager::getInstance()->getScriptEngine();
    LuaHandlePair *p;
    auto it = m_scriptEventListeners->begin();
    for (; it != m_scriptEventListeners->end(); ++it)
    {
        p = *it;
        if (p->handle != handle) continue;
        if (!p->removed)
        {
            p->removed = true;
            engine->removeScriptHandler(p->listener);
        }
        break;
    }
}

void LuaEventDispatcher::removeScriptEventListenersByEvent(int event)
{
    if (!m_scriptEventListeners) return;

    ScriptEngineProtocol *engine = ScriptEngineManager::getInstance()->getScriptEngine();
    LuaHandlePair *p;
    auto it = m_scriptEventListeners->begin();
    for (; it != m_scriptEventListeners->end(); ++it)
    {
        p = *it;
        if (p->event != event) continue;
        if (!p->removed)
        {
            p->removed = true;
            engine->removeScriptHandler(p->listener);
        }
    }
}

void LuaEventDispatcher::removeScriptEventListenersByTag(int tag)
{
    if (!m_scriptEventListeners) return;

    ScriptEngineProtocol *engine = ScriptEngineManager::getInstance()->getScriptEngine();
    LuaHandlePair *p;
    auto it = m_scriptEventListeners->begin();
    for (; it != m_scriptEventListeners->end(); ++it)
    {
        p = *it;
        if (p->tag != tag) continue;
        if (!p->removed)
        {
            p->removed = true;
            engine->removeScriptHandler(p->listener);
        }
    }
}

void LuaEventDispatcher::removeAllScriptEventListeners()
{
    if (!m_scriptEventListeners) return;

    ScriptEngineProtocol *engine = ScriptEngineManager::getInstance()->getScriptEngine();
    LuaHandlePair *p;
    auto it = m_scriptEventListeners->begin();
    for (; it != m_scriptEventListeners->end(); ++it)
    {
        p = *it;
        if (!p->removed)
        {
            p->removed = true;
            engine->removeScriptHandler(p->listener);
        }
    }
}

void LuaEventDispatcher::cleanRemovedEvents()
{
    if (!m_scriptEventListeners) return;

    LuaEventListenersForEvent eventsRemoved;
    LuaHandlePair *p;
    auto it = m_scriptEventListeners->begin();
    for (; it != m_scriptEventListeners->end(); ++it)
    {
        p = *it;
        if (p->removed)
        {
            eventsRemoved.pushBack(p);
        }
    }
    it = eventsRemoved.begin();
    for (; it!=eventsRemoved.end(); ++it)
    {
        p = *it;
        m_scriptEventListeners->eraseObject(p);
    }
    eventsRemoved.clear();
}

bool LuaEventDispatcher::hasScriptEventListener(int event)
{
    if (!m_scriptEventListeners) return false;

    LuaHandlePair *p;
    auto it = m_scriptEventListeners->begin();
    for (; it != m_scriptEventListeners->end(); ++it)
    {
        p = *it;
        if (p->event != event) continue;
        return true;
    }
    return false;
}

LuaEventListenersForEvent *LuaEventDispatcher::getAllScriptEventListeners() const
{
    return m_scriptEventListeners;
}

NS_CC_END
