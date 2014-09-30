
#include "lua_cocos2dx_external_filter_manual.hpp"
#include "../auto/lua_cocos2dx_external_filter_auto.hpp"
#include "CCLuaEngine.h"

int register_all_cocos2dx_external_filter_manual(lua_State* L)
{
    if (nullptr == L)
        return 0;

    return 0;
}

int register_filter_moudle(lua_State* L)
{
    lua_getglobal(L, "_G");
    if (lua_istable(L,-1))//stack:...,_G,
    {
        register_all_cocos2dx_external_filter(L);
        register_all_cocos2dx_external_filter_manual(L);
    }
    lua_pop(L, 1);
    
    return 1;
}

