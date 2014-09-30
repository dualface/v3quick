
#ifndef __cocos2dx_external_filter_manual_h__
#define __cocos2dx_external_filter_manual_h__

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

TOLUA_API int register_all_cocos2dx_external_filter_manual(lua_State* L);
TOLUA_API int register_filter_moudle(lua_State* L);

#endif //__cocos2dx_external_filter_manual_h__

