LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := cocostudio_static

LOCAL_MODULE_FILENAME := libcocostudio

LOCAL_SRC_FILES := \
CCArmature.cpp \
CCArmatureAnimation.cpp \
CCArmatureDataManager.cpp \
CCArmatureDefine.cpp \
CCBone.cpp \
CCColliderDetector.cpp \
CCDataReaderHelper.cpp \
CCDatas.cpp \
CCDecorativeDisplay.cpp \
CCDisplayFactory.cpp \
CCDisplayManager.cpp \
CCProcessBase.cpp \
CCSkin.cpp \
CCSpriteFrameCacheHelper.cpp \
CCTransformHelp.cpp \
CCTween.cpp \
CCUtilMath.cpp \
CocoLoader.cpp \
DictionaryHelper.cpp \


LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/.. \
$(LOCAL_PATH)/../../../external

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../.. \
$(LOCAL_PATH)/../../../external \
$(LOCAL_PATH)/.. \
$(LOCAL_PATH)/../..

LOCAL_CFLAGS += -fexceptions


LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocosdenshion_static
#LOCAL_WHOLE_STATIC_LIBRARIES += cocos_ui_static

include $(BUILD_STATIC_LIBRARY)

$(call import-module,.)
$(call import-module,audio/android)
#$(call import-module,ui)

