#include "lua_cocos2dx_studio_auto.hpp"
#include "CCArmature.h"
#include "CCSkin.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_studio_Bone_isTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_isTransformDirty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isTransformDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTransformDirty",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_isTransformDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isIgnoreMovementBoneData();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isIgnoreMovementBoneData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_updateZOrder(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateZOrder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateZOrder();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateZOrder",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateZOrder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayRenderNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getDisplayRenderNode();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayRenderNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_isBlendDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_isBlendDirty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isBlendDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isBlendDirty",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_isBlendDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_addChildBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_addChildBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);
        if(!ok)
            return 0;
        cobj->addChildBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addChildBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_addChildBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getWorldInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getWorldInfo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BaseData* ret = cobj->getWorldInfo();
        object_to_luaval<cocostudio::BaseData>(tolua_S, "ccs.BaseData",(cocostudio::BaseData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getWorldInfo",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getWorldInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getTween(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getTween'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Tween* ret = cobj->getTween();
        object_to_luaval<cocostudio::Tween>(tolua_S, "ccs.Tween",(cocostudio::Tween*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTween",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getTween'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getParentBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getParentBone();
        object_to_luaval<cocostudio::Bone>(tolua_S, "ccs.Bone",(cocostudio::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getParentBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_updateColor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_updateColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateColor();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_updateColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setTransformDirty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTransformDirty(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTransformDirty",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setTransformDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayRenderNodeType(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNodeType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getDisplayRenderNodeType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayRenderNodeType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayRenderNodeType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_removeDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeDisplay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->removeDisplay(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeDisplay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setBoneData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BoneData* arg0;

        ok &= luaval_to_object<cocostudio::BoneData>(tolua_S, 2, "ccs.BoneData",&arg0);
        if(!ok)
            return 0;
        cobj->setBoneData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBoneData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_init'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            bool ret = cobj->init();
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setParentBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);
        if(!ok)
            return 0;
        cobj->setParentBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParentBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_addDisplay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_addDisplay'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocostudio::DisplayData* arg0;
            ok &= luaval_to_object<cocostudio::DisplayData>(tolua_S, 2, "ccs.DisplayData",&arg0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            cobj->addDisplay(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDisplay",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_addDisplay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_removeFromParent(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeFromParent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeFromParent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeFromParent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeFromParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getColliderDetector(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getColliderDetector'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ColliderDetector* ret = cobj->getColliderDetector();
        object_to_luaval<cocostudio::ColliderDetector>(tolua_S, "ccs.ColliderDetector",(cocostudio::ColliderDetector*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getColliderDetector",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getColliderDetector'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getChildArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getChildArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Armature* ret = cobj->getChildArmature();
        object_to_luaval<cocostudio::Armature>(tolua_S, "ccs.Armature",(cocostudio::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getChildArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getChildArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getTweenData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getTweenData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::FrameData* ret = cobj->getTweenData();
        object_to_luaval<cocostudio::FrameData>(tolua_S, "ccs.FrameData",(cocostudio::FrameData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTweenData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getTweenData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_changeDisplayWithIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_changeDisplayWithIndex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        bool arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeDisplayWithIndex(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeDisplayWithIndex",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_changeDisplayWithIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_changeDisplayWithName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_changeDisplayWithName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        bool arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeDisplayWithName(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeDisplayWithName",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_changeDisplayWithName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;

        ok &= luaval_to_object<cocostudio::Armature>(tolua_S, 2, "ccs.Armature",&arg0);
        if(!ok)
            return 0;
        cobj->setArmature(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setArmature",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setBlendDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setBlendDirty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setBlendDirty(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBlendDirty",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setBlendDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_removeChildBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_removeChildBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        bool arg1;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeChildBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeChildBone",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_removeChildBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_setChildArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_setChildArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;

        ok &= luaval_to_object<cocostudio::Armature>(tolua_S, 2, "ccs.Armature",&arg0);
        if(!ok)
            return 0;
        cobj->setChildArmature(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setChildArmature",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_setChildArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getNodeToArmatureTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getNodeToArmatureTransform'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Mat4 ret = cobj->getNodeToArmatureTransform();
        mat4_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToArmatureTransform",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getNodeToArmatureTransform'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getDisplayManager(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getDisplayManager'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::DisplayManager* ret = cobj->getDisplayManager();
        object_to_luaval<cocostudio::DisplayManager>(tolua_S, "ccs.DisplayManager",(cocostudio::DisplayManager*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getDisplayManager'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Armature* ret = cobj->getArmature();
        object_to_luaval<cocostudio::Armature>(tolua_S, "ccs.Armature",(cocostudio::Armature*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_getBoneData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Bone*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Bone_getBoneData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BoneData* ret = cobj->getBoneData();
        object_to_luaval<cocostudio::BoneData>(tolua_S, "ccs.BoneData",(cocostudio::BoneData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_getBoneData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Bone_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccs.Bone",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Bone* ret = cocostudio::Bone::create(arg0);
            object_to_luaval<cocostudio::Bone>(tolua_S, "ccs.Bone",(cocostudio::Bone*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocostudio::Bone* ret = cocostudio::Bone::create();
            object_to_luaval<cocostudio::Bone>(tolua_S, "ccs.Bone",(cocostudio::Bone*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Bone_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Bone* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Bone();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccs.Bone");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Bone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Bone_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_Bone_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Bone)");
    return 0;
}

int lua_register_cocos2dx_studio_Bone(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccs.Bone");
    tolua_cclass(tolua_S,"Bone","ccs.Bone","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"Bone");
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Bone_constructor);
        tolua_function(tolua_S,"isTransformDirty",lua_cocos2dx_studio_Bone_isTransformDirty);
        tolua_function(tolua_S,"isIgnoreMovementBoneData",lua_cocos2dx_studio_Bone_isIgnoreMovementBoneData);
        tolua_function(tolua_S,"updateZOrder",lua_cocos2dx_studio_Bone_updateZOrder);
        tolua_function(tolua_S,"getDisplayRenderNode",lua_cocos2dx_studio_Bone_getDisplayRenderNode);
        tolua_function(tolua_S,"isBlendDirty",lua_cocos2dx_studio_Bone_isBlendDirty);
        tolua_function(tolua_S,"addChildBone",lua_cocos2dx_studio_Bone_addChildBone);
        tolua_function(tolua_S,"getWorldInfo",lua_cocos2dx_studio_Bone_getWorldInfo);
        tolua_function(tolua_S,"getTween",lua_cocos2dx_studio_Bone_getTween);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_studio_Bone_getParentBone);
        tolua_function(tolua_S,"updateColor",lua_cocos2dx_studio_Bone_updateColor);
        tolua_function(tolua_S,"setTransformDirty",lua_cocos2dx_studio_Bone_setTransformDirty);
        tolua_function(tolua_S,"getDisplayRenderNodeType",lua_cocos2dx_studio_Bone_getDisplayRenderNodeType);
        tolua_function(tolua_S,"removeDisplay",lua_cocos2dx_studio_Bone_removeDisplay);
        tolua_function(tolua_S,"setBoneData",lua_cocos2dx_studio_Bone_setBoneData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_Bone_init);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_studio_Bone_setParentBone);
        tolua_function(tolua_S,"addDisplay",lua_cocos2dx_studio_Bone_addDisplay);
        tolua_function(tolua_S,"removeFromParent",lua_cocos2dx_studio_Bone_removeFromParent);
        tolua_function(tolua_S,"getColliderDetector",lua_cocos2dx_studio_Bone_getColliderDetector);
        tolua_function(tolua_S,"getChildArmature",lua_cocos2dx_studio_Bone_getChildArmature);
        tolua_function(tolua_S,"getTweenData",lua_cocos2dx_studio_Bone_getTweenData);
        tolua_function(tolua_S,"changeDisplayWithIndex",lua_cocos2dx_studio_Bone_changeDisplayWithIndex);
        tolua_function(tolua_S,"changeDisplayWithName",lua_cocos2dx_studio_Bone_changeDisplayWithName);
        tolua_function(tolua_S,"setArmature",lua_cocos2dx_studio_Bone_setArmature);
        tolua_function(tolua_S,"setBlendDirty",lua_cocos2dx_studio_Bone_setBlendDirty);
        tolua_function(tolua_S,"removeChildBone",lua_cocos2dx_studio_Bone_removeChildBone);
        tolua_function(tolua_S,"setChildArmature",lua_cocos2dx_studio_Bone_setChildArmature);
        tolua_function(tolua_S,"getNodeToArmatureTransform",lua_cocos2dx_studio_Bone_getNodeToArmatureTransform);
        tolua_function(tolua_S,"getDisplayManager",lua_cocos2dx_studio_Bone_getDisplayManager);
        tolua_function(tolua_S,"getArmature",lua_cocos2dx_studio_Bone_getArmature);
        tolua_function(tolua_S,"getBoneData",lua_cocos2dx_studio_Bone_getBoneData);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Bone_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::Bone).name();
    g_luaType[typeName] = "ccs.Bone";
    g_typeCast["Bone"] = "ccs.Bone";
    return 1;
}

int lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getSpeedScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSpeedScale",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_pause'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pause();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pause",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setSpeedScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSpeedScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Armature* arg0;

        ok &= luaval_to_object<cocostudio::Armature>(tolua_S, 2, "ccs.Armature",&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->init(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::vector<int> arg0;

        ok &= luaval_to_std_vector_int(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->playWithIndexes(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        std::vector<int> arg0;
        int arg1;

        ok &= luaval_to_std_vector_int(tolua_S, 2, &arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->playWithIndexes(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::vector<int> arg0;
        int arg1;
        bool arg2;

        ok &= luaval_to_std_vector_int(tolua_S, 2, &arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->playWithIndexes(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playWithIndexes",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_play(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_play'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->play(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        std::string arg0;
        int arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        int arg1;
        int arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        cobj->play(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "play",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_play'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->gotoAndPause(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "gotoAndPause",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_resume'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->resume();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resume",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_resume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_stop(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_stop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_stop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_update(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cobj->getAnimationData();
        object_to_luaval<cocostudio::AnimationData>(tolua_S, "ccs.AnimationData",(cocostudio::AnimationData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_playWithIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->playWithIndex(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->playWithIndex(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        int arg0;
        int arg1;
        int arg2;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);
        if(!ok)
            return 0;
        cobj->playWithIndex(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playWithIndex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getCurrentMovementID();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentMovementID",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_setAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::AnimationData* arg0;

        ok &= luaval_to_object<cocostudio::AnimationData>(tolua_S, 2, "ccs.AnimationData",&arg0);
        if(!ok)
            return 0;
        cobj->setAnimationData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimationData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_setAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->gotoAndPlay(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "gotoAndPlay",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_playWithNames(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithNames'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::vector<std::string> arg0;

        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->playWithNames(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        std::vector<std::string> arg0;
        int arg1;

        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->playWithNames(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::vector<std::string> arg0;
        int arg1;
        bool arg2;

        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->playWithNames(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "playWithNames",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_playWithNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_getMovementCount(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureAnimation_getMovementCount'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        ssize_t ret = cobj->getMovementCount();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMovementCount",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_getMovementCount'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccs.ArmatureAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocostudio::Armature* arg0;
        ok &= luaval_to_object<cocostudio::Armature>(tolua_S, 2, "ccs.Armature",&arg0);
        if(!ok)
            return 0;
        cocostudio::ArmatureAnimation* ret = cocostudio::ArmatureAnimation::create(arg0);
        object_to_luaval<cocostudio::ArmatureAnimation>(tolua_S, "ccs.ArmatureAnimation",(cocostudio::ArmatureAnimation*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureAnimation_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::ArmatureAnimation();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccs.ArmatureAnimation");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ArmatureAnimation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureAnimation_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_ArmatureAnimation_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureAnimation)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureAnimation(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccs.ArmatureAnimation");
    tolua_cclass(tolua_S,"ArmatureAnimation","ccs.ArmatureAnimation","ccs.ProcessBase",nullptr);

    tolua_beginmodule(tolua_S,"ArmatureAnimation");
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_ArmatureAnimation_constructor);
        tolua_function(tolua_S,"getSpeedScale",lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale);
        tolua_function(tolua_S,"pause",lua_cocos2dx_studio_ArmatureAnimation_pause);
        tolua_function(tolua_S,"setSpeedScale",lua_cocos2dx_studio_ArmatureAnimation_setSpeedScale);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureAnimation_init);
        tolua_function(tolua_S,"playWithIndexes",lua_cocos2dx_studio_ArmatureAnimation_playWithIndexes);
        tolua_function(tolua_S,"play",lua_cocos2dx_studio_ArmatureAnimation_play);
        tolua_function(tolua_S,"gotoAndPause",lua_cocos2dx_studio_ArmatureAnimation_gotoAndPause);
        tolua_function(tolua_S,"resume",lua_cocos2dx_studio_ArmatureAnimation_resume);
        tolua_function(tolua_S,"stop",lua_cocos2dx_studio_ArmatureAnimation_stop);
        tolua_function(tolua_S,"update",lua_cocos2dx_studio_ArmatureAnimation_update);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_studio_ArmatureAnimation_getAnimationData);
        tolua_function(tolua_S,"playWithIndex",lua_cocos2dx_studio_ArmatureAnimation_playWithIndex);
        tolua_function(tolua_S,"getCurrentMovementID",lua_cocos2dx_studio_ArmatureAnimation_getCurrentMovementID);
        tolua_function(tolua_S,"setAnimationData",lua_cocos2dx_studio_ArmatureAnimation_setAnimationData);
        tolua_function(tolua_S,"gotoAndPlay",lua_cocos2dx_studio_ArmatureAnimation_gotoAndPlay);
        tolua_function(tolua_S,"playWithNames",lua_cocos2dx_studio_ArmatureAnimation_playWithNames);
        tolua_function(tolua_S,"getMovementCount",lua_cocos2dx_studio_ArmatureAnimation_getMovementCount);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_ArmatureAnimation_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ArmatureAnimation).name();
    g_luaType[typeName] = "ccs.ArmatureAnimation";
    g_typeCast["ArmatureAnimation"] = "ccs.ArmatureAnimation";
    return 1;
}

int lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::AnimationData *>& ret = cobj->getAnimationDatas();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationDatas",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeAnimationData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAnimationData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocostudio::ArmatureData* arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_object<cocostudio::ArmatureData>(tolua_S, 3, "ccs.ArmatureData",&arg1);
        if(!ok)
            return 0;
        cobj->addArmatureData(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        cocostudio::ArmatureData* arg1;
        std::string arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_object<cocostudio::ArmatureData>(tolua_S, 3, "ccs.ArmatureData",&arg1);

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addArmatureData(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addArmatureData",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1);

            if (!ok) { break; }
            std::string arg2;
            ok &= luaval_to_std_string(tolua_S, 4,&arg2);

            if (!ok) { break; }
            cobj->addArmatureFileInfo(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            cobj->addArmatureFileInfo(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addArmatureFileInfo",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeArmatureFileInfo(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeArmatureFileInfo",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::TextureData *>& ret = cobj->getTextureDatas();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureDatas",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::TextureData* ret = cobj->getTextureData(arg0);
        object_to_luaval<cocostudio::TextureData>(tolua_S, "ccs.TextureData",(cocostudio::TextureData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getTextureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cobj->getArmatureData(arg0);
        object_to_luaval<cocostudio::ArmatureData>(tolua_S, "ccs.ArmatureData",(cocostudio::ArmatureData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::AnimationData* ret = cobj->getAnimationData(arg0);
        object_to_luaval<cocostudio::AnimationData>(tolua_S, "ccs.AnimationData",(cocostudio::AnimationData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addAnimationData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addAnimationData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocostudio::AnimationData* arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_object<cocostudio::AnimationData>(tolua_S, 3, "ccs.AnimationData",&arg1);
        if(!ok)
            return 0;
        cobj->addAnimationData(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        cocostudio::AnimationData* arg1;
        std::string arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_object<cocostudio::AnimationData>(tolua_S, 3, "ccs.AnimationData",&arg1);

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addAnimationData(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addAnimationData",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addAnimationData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeArmatureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeArmatureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::ArmatureData *>& ret = cobj->getArmatureDatas();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureDatas",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_removeTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_removeTextureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->removeTextureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeTextureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_removeTextureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addTextureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addTextureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocostudio::TextureData* arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_object<cocostudio::TextureData>(tolua_S, 3, "ccs.TextureData",&arg1);
        if(!ok)
            return 0;
        cobj->addTextureData(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        cocostudio::TextureData* arg1;
        std::string arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_object<cocostudio::TextureData>(tolua_S, 3, "ccs.TextureData",&arg1);

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addTextureData(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addTextureData",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addTextureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isAutoLoadSpriteFile();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isAutoLoadSpriteFile",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::ArmatureDataManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::ArmatureDataManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        std::string arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addSpriteFrameFromFile(arg0, arg1);
        return 0;
    }
    if (argc == 3) 
    {
        std::string arg0;
        std::string arg1;
        std::string arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addSpriteFrameFromFile(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addSpriteFrameFromFile",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_destroyInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDataManager::destroyInstance();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "destroyInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_destroyInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_ArmatureDataManager_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccs.ArmatureDataManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureDataManager* ret = cocostudio::ArmatureDataManager::getInstance();
        object_to_luaval<cocostudio::ArmatureDataManager>(tolua_S, "ccs.ArmatureDataManager",(cocostudio::ArmatureDataManager*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_ArmatureDataManager_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_studio_ArmatureDataManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ArmatureDataManager)");
    return 0;
}

int lua_register_cocos2dx_studio_ArmatureDataManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccs.ArmatureDataManager");
    tolua_cclass(tolua_S,"ArmatureDataManager","ccs.ArmatureDataManager","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"ArmatureDataManager");
        tolua_function(tolua_S,"getAnimationDatas",lua_cocos2dx_studio_ArmatureDataManager_getAnimationDatas);
        tolua_function(tolua_S,"removeAnimationData",lua_cocos2dx_studio_ArmatureDataManager_removeAnimationData);
        tolua_function(tolua_S,"addArmatureData",lua_cocos2dx_studio_ArmatureDataManager_addArmatureData);
        tolua_function(tolua_S,"addArmatureFileInfo",lua_cocos2dx_studio_ArmatureDataManager_addArmatureFileInfo);
        tolua_function(tolua_S,"removeArmatureFileInfo",lua_cocos2dx_studio_ArmatureDataManager_removeArmatureFileInfo);
        tolua_function(tolua_S,"getTextureDatas",lua_cocos2dx_studio_ArmatureDataManager_getTextureDatas);
        tolua_function(tolua_S,"getTextureData",lua_cocos2dx_studio_ArmatureDataManager_getTextureData);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_studio_ArmatureDataManager_getArmatureData);
        tolua_function(tolua_S,"getAnimationData",lua_cocos2dx_studio_ArmatureDataManager_getAnimationData);
        tolua_function(tolua_S,"addAnimationData",lua_cocos2dx_studio_ArmatureDataManager_addAnimationData);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_ArmatureDataManager_init);
        tolua_function(tolua_S,"removeArmatureData",lua_cocos2dx_studio_ArmatureDataManager_removeArmatureData);
        tolua_function(tolua_S,"getArmatureDatas",lua_cocos2dx_studio_ArmatureDataManager_getArmatureDatas);
        tolua_function(tolua_S,"removeTextureData",lua_cocos2dx_studio_ArmatureDataManager_removeTextureData);
        tolua_function(tolua_S,"addTextureData",lua_cocos2dx_studio_ArmatureDataManager_addTextureData);
        tolua_function(tolua_S,"isAutoLoadSpriteFile",lua_cocos2dx_studio_ArmatureDataManager_isAutoLoadSpriteFile);
        tolua_function(tolua_S,"addSpriteFrameFromFile",lua_cocos2dx_studio_ArmatureDataManager_addSpriteFrameFromFile);
        tolua_function(tolua_S,"destroyInstance", lua_cocos2dx_studio_ArmatureDataManager_destroyInstance);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_studio_ArmatureDataManager_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::ArmatureDataManager).name();
    g_luaType[typeName] = "ccs.ArmatureDataManager";
    g_typeCast["ArmatureDataManager"] = "ccs.ArmatureDataManager";
    return 1;
}

int lua_cocos2dx_studio_Armature_getBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBone(arg0);
        object_to_luaval<cocostudio::Bone>(tolua_S, "ccs.Bone",(cocostudio::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_changeBoneParent(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_changeBoneParent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        std::string arg1;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->changeBoneParent(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changeBoneParent",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_changeBoneParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureAnimation* arg0;

        ok &= luaval_to_object<cocostudio::ArmatureAnimation>(tolua_S, 2, "ccs.ArmatureAnimation",&arg0);
        if(!ok)
            return 0;
        cobj->setAnimation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getBoneAtPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBoneAtPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBoneAtPoint(arg0, arg1);
        object_to_luaval<cocostudio::Bone>(tolua_S, "ccs.Bone",(cocostudio::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneAtPoint",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBoneAtPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getArmatureTransformDirty(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getArmatureTransformDirty'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getArmatureTransformDirty();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureTransformDirty",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getArmatureTransformDirty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setVersion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setVersion(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVersion",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_updateOffsetPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_updateOffsetPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateOffsetPoint();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateOffsetPoint",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_updateOffsetPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getParentBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getParentBone();
        object_to_luaval<cocostudio::Bone>(tolua_S, "ccs.Bone",(cocostudio::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getParentBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_removeBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_removeBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        bool arg1;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->removeBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeBone",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_removeBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBatchNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::BatchNode* ret = cobj->getBatchNode();
        object_to_luaval<cocostudio::BatchNode>(tolua_S, "ccs.BatchNode",(cocostudio::BatchNode*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBatchNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_init(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_init'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            bool ret = cobj->init(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            bool ret = cobj->init();
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);

            if (!ok) { break; }
            cocostudio::Bone* arg1;
            ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 3, "ccs.Bone",&arg1);

            if (!ok) { break; }
            bool ret = cobj->init(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setParentBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setParentBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);
        if(!ok)
            return 0;
        cobj->setParentBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setParentBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setParentBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_drawContour(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_drawContour'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->drawContour();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "drawContour",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_drawContour'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setBatchNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::BatchNode* arg0;

        ok &= luaval_to_object<cocostudio::BatchNode>(tolua_S, 2, "ccs.BatchNode",&arg0);
        if(!ok)
            return 0;
        cobj->setBatchNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBatchNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_setArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_setArmatureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::ArmatureData* arg0;

        ok &= luaval_to_object<cocostudio::ArmatureData>(tolua_S, 2, "ccs.ArmatureData",&arg0);
        if(!ok)
            return 0;
        cobj->setArmatureData(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setArmatureData",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_setArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_addBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_addBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocostudio::Bone* arg0;
        std::string arg1;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addBone(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addBone",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_addBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getArmatureData(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getArmatureData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureData* ret = cobj->getArmatureData();
        object_to_luaval<cocostudio::ArmatureData>(tolua_S, "ccs.ArmatureData",(cocostudio::ArmatureData*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getArmatureData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getArmatureData'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getVersion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getVersion();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVersion",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getAnimation(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::ArmatureAnimation* ret = cobj->getAnimation();
        object_to_luaval<cocostudio::ArmatureAnimation>(tolua_S, "ccs.ArmatureAnimation",(cocostudio::ArmatureAnimation*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_getBoneDic(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Armature*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Armature_getBoneDic'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Map<std::string, cocostudio::Bone *>& ret = cobj->getBoneDic();
        ccmap_string_key_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBoneDic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_getBoneDic'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Armature_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccs.Armature",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Armature* ret = cocostudio::Armature::create(arg0);
            object_to_luaval<cocostudio::Armature>(tolua_S, "ccs.Armature",(cocostudio::Armature*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocostudio::Armature* ret = cocostudio::Armature::create();
            object_to_luaval<cocostudio::Armature>(tolua_S, "ccs.Armature",(cocostudio::Armature*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Bone* arg1;
            ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 3, "ccs.Bone",&arg1);
            if (!ok) { break; }
            cocostudio::Armature* ret = cocostudio::Armature::create(arg0, arg1);
            object_to_luaval<cocostudio::Armature>(tolua_S, "ccs.Armature",(cocostudio::Armature*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Armature_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Armature* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Armature();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccs.Armature");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Armature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Armature_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_Armature_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Armature)");
    return 0;
}

int lua_register_cocos2dx_studio_Armature(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccs.Armature");
    tolua_cclass(tolua_S,"Armature","ccs.Armature","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"Armature");
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Armature_constructor);
        tolua_function(tolua_S,"getBone",lua_cocos2dx_studio_Armature_getBone);
        tolua_function(tolua_S,"changeBoneParent",lua_cocos2dx_studio_Armature_changeBoneParent);
        tolua_function(tolua_S,"setAnimation",lua_cocos2dx_studio_Armature_setAnimation);
        tolua_function(tolua_S,"getBoneAtPoint",lua_cocos2dx_studio_Armature_getBoneAtPoint);
        tolua_function(tolua_S,"getArmatureTransformDirty",lua_cocos2dx_studio_Armature_getArmatureTransformDirty);
        tolua_function(tolua_S,"setVersion",lua_cocos2dx_studio_Armature_setVersion);
        tolua_function(tolua_S,"updateOffsetPoint",lua_cocos2dx_studio_Armature_updateOffsetPoint);
        tolua_function(tolua_S,"getParentBone",lua_cocos2dx_studio_Armature_getParentBone);
        tolua_function(tolua_S,"removeBone",lua_cocos2dx_studio_Armature_removeBone);
        tolua_function(tolua_S,"getBatchNode",lua_cocos2dx_studio_Armature_getBatchNode);
        tolua_function(tolua_S,"init",lua_cocos2dx_studio_Armature_init);
        tolua_function(tolua_S,"setParentBone",lua_cocos2dx_studio_Armature_setParentBone);
        tolua_function(tolua_S,"drawContour",lua_cocos2dx_studio_Armature_drawContour);
        tolua_function(tolua_S,"setBatchNode",lua_cocos2dx_studio_Armature_setBatchNode);
        tolua_function(tolua_S,"setArmatureData",lua_cocos2dx_studio_Armature_setArmatureData);
        tolua_function(tolua_S,"addBone",lua_cocos2dx_studio_Armature_addBone);
        tolua_function(tolua_S,"getArmatureData",lua_cocos2dx_studio_Armature_getArmatureData);
        tolua_function(tolua_S,"getVersion",lua_cocos2dx_studio_Armature_getVersion);
        tolua_function(tolua_S,"getAnimation",lua_cocos2dx_studio_Armature_getAnimation);
        tolua_function(tolua_S,"getBoneDic",lua_cocos2dx_studio_Armature_getBoneDic);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Armature_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::Armature).name();
    g_luaType[typeName] = "ccs.Armature";
    g_typeCast["Armature"] = "ccs.Armature";
    return 1;
}

int lua_cocos2dx_studio_Skin_getBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocostudio::Bone* ret = cobj->getBone();
        object_to_luaval<cocostudio::Bone>(tolua_S, "ccs.Bone",(cocostudio::Bone*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Mat4 ret = cobj->getNodeToWorldTransformAR();
        mat4_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeToWorldTransformAR",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_initWithFile(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_initWithFile'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithFile(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_initWithFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_getDisplayName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_getDisplayName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getDisplayName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDisplayName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_getDisplayName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_updateArmatureTransform(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_updateArmatureTransform'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateArmatureTransform();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateArmatureTransform",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_updateArmatureTransform'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_initWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_initWithSpriteFrameName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithSpriteFrameName(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSpriteFrameName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_initWithSpriteFrameName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_setBone(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocostudio::Skin*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_studio_Skin_setBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocostudio::Bone* arg0;

        ok &= luaval_to_object<cocostudio::Bone>(tolua_S, 2, "ccs.Bone",&arg0);
        if(!ok)
            return 0;
        cobj->setBone(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBone",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_setBone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_studio_Skin_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            cocostudio::Skin* ret = cocostudio::Skin::create(arg0);
            object_to_luaval<cocostudio::Skin>(tolua_S, "ccs.Skin",(cocostudio::Skin*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocostudio::Skin* ret = cocostudio::Skin::create();
            object_to_luaval<cocostudio::Skin>(tolua_S, "ccs.Skin",(cocostudio::Skin*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccs.Skin",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocostudio::Skin* ret = cocostudio::Skin::createWithSpriteFrameName(arg0);
        object_to_luaval<cocostudio::Skin>(tolua_S, "ccs.Skin",(cocostudio::Skin*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_studio_Skin_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocostudio::Skin* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocostudio::Skin();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccs.Skin");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Skin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_studio_Skin_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_studio_Skin_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Skin)");
    return 0;
}

int lua_register_cocos2dx_studio_Skin(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccs.Skin");
    tolua_cclass(tolua_S,"Skin","ccs.Skin","cc.Sprite",nullptr);

    tolua_beginmodule(tolua_S,"Skin");
        tolua_function(tolua_S,"new",lua_cocos2dx_studio_Skin_constructor);
        tolua_function(tolua_S,"getBone",lua_cocos2dx_studio_Skin_getBone);
        tolua_function(tolua_S,"getNodeToWorldTransformAR",lua_cocos2dx_studio_Skin_getNodeToWorldTransformAR);
        tolua_function(tolua_S,"initWithFile",lua_cocos2dx_studio_Skin_initWithFile);
        tolua_function(tolua_S,"getDisplayName",lua_cocos2dx_studio_Skin_getDisplayName);
        tolua_function(tolua_S,"updateArmatureTransform",lua_cocos2dx_studio_Skin_updateArmatureTransform);
        tolua_function(tolua_S,"initWithSpriteFrameName",lua_cocos2dx_studio_Skin_initWithSpriteFrameName);
        tolua_function(tolua_S,"setBone",lua_cocos2dx_studio_Skin_setBone);
        tolua_function(tolua_S,"create", lua_cocos2dx_studio_Skin_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_studio_Skin_createWithSpriteFrameName);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocostudio::Skin).name();
    g_luaType[typeName] = "ccs.Skin";
    g_typeCast["Skin"] = "ccs.Skin";
    return 1;
}
TOLUA_API int register_all_cocos2dx_studio(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ccs",0);
	tolua_beginmodule(tolua_S,"ccs");

	lua_register_cocos2dx_studio_Skin(tolua_S);
	lua_register_cocos2dx_studio_ArmatureAnimation(tolua_S);
	lua_register_cocos2dx_studio_Armature(tolua_S);
	lua_register_cocos2dx_studio_ArmatureDataManager(tolua_S);
	lua_register_cocos2dx_studio_Bone(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

