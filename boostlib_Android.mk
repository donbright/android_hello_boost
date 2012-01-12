# copy this file to $NDK_ROOT/sources/boost/Android.mk

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE:= boost_thread
LOCAL_SRC_FILES:= android/lib/libboost_thread.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:= boost_program_options
LOCAL_SRC_FILES:= android/lib/libboost_program_options.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
include $(PREBUILT_STATIC_LIBRARY)

