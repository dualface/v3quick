#include "lua_cocos2dx_quick_manual.hpp"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"
#include "CCLuaValue.h"
#include "CCLuaEngine.h"
#include "LuaTouchEventManager.h"

static int tolua_cocos2d_Node_addNodeEventListener(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"cc.Node",0,&tolua_err) ||
        !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
        (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_isfunction(tolua_S,3,"LUA_FUNCTION",0,&tolua_err)) ||
//        !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
//        !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
        !tolua_isnoobj(tolua_S,6,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        Node* node = static_cast<cocos2d::Node*>(tolua_tousertype(tolua_S,1,0));
        int event = ((int)  tolua_tonumber(tolua_S,2,0));
        LUA_FUNCTION listener = (toluafix_ref_function(tolua_S,3,0));
        int tag = 0;
        if (lua_isnumber(tolua_S,4)) {
            tag = ((int)  tolua_tonumber(tolua_S,4,0));
        }
        int priority = 0;
        if (lua_isnumber(tolua_S,5)) {
            priority = ((int)  tolua_tonumber(tolua_S,5,0));
        }
#if COCOS2D_DEBUG >= 1
        if (!node) tolua_error(tolua_S,"invalid 'self' in function 'addScriptEventListener'", NULL);
#endif
        {
            auto mng = LuaTouchEventManager::getInstance();
            int tolua_ret = (int)  mng->addScriptEventListener(node, event,listener,tag,priority);
            tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
        }
    }
    return 1;
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'addNodeEventListener'.",&tolua_err);
    return 0;
#endif
}

static void extendNode(lua_State* tolua_S)
{
    lua_pushstring(tolua_S,"cc.Node");
    lua_rawget(tolua_S,LUA_REGISTRYINDEX);
    if (lua_istable(tolua_S,-1))
    {
        lua_pushstring(tolua_S, "addNodeEventListener");
        lua_pushcfunction(tolua_S, tolua_cocos2d_Node_addNodeEventListener);
        lua_rawset(tolua_S,-3);
    }
    lua_pop(tolua_S, 1);
}

int register_all_quick_manual(lua_State* tolua_S)
{
    if (NULL == tolua_S)
        return 0;
    
    extendNode(tolua_S);
    
    return 0;
}

