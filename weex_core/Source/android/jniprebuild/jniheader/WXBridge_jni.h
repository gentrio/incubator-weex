// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     /Users/miomin/Desktop/workspace/alibaba/WeexCore-dev/WeexCore-
//    dev/android/weex_core_debug/Source/WeexCore/platform/android/jniprebuild/jni_generator.py
// For
//     com/taobao/weex/bridge/WXBridge

#ifndef com_taobao_weex_bridge_WXBridge_JNI
#define com_taobao_weex_bridge_WXBridge_JNI

#include <jni.h>

//#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kWXBridgeClassPath[] = "com/taobao/weex/bridge/WXBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_WXBridge_clazz = NULL;
#define WXBridge_clazz(env) g_WXBridge_clazz

}  // namespace

static jint InitFrameworkEnv(JNIEnv* env, jobject jcaller,
    jstring framework,
    jobject params,
    jstring cacheDir,
    jboolean pieSupport);

static jint InitFramework(JNIEnv* env, jobject jcaller,
    jstring framework,
    jobject params);

static jint ExecJS(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring name,
    jstring function,
    jobjectArray args);

static jint ExecJSService(JNIEnv* env, jobject jcaller,
    jstring javascript);

static jbyteArray ExecJSWithResult(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring _namespace,
    jstring _function,
    jobjectArray args);

static jint CreateInstanceContext(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring name,
    jstring function,
    jobjectArray args);

static jint DestoryInstance(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring name,
    jstring function,
    jobjectArray args);

static jstring ExecJSOnInstance(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring script,
    jint type);

static void TakeHeapSnapshot(JNIEnv* env, jobject jcaller,
    jstring filename);

static void BindMeasurementToWXCore(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring ref,
    jobject contentBoxMeasurement);

static void SetRenderContainerWrapContent(JNIEnv* env, jobject jcaller,
    jboolean wrap,
    jstring instanceId);

static jint PrintFirstScreenRenderTime(JNIEnv* env, jobject jcaller,
    jstring instanceId);

static jint PrintRenderFinishTime(JNIEnv* env, jobject jcaller,
    jstring instanceId);

static void SetDefaultHeightAndWidthIntoRootDom(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jfloat defaultWidth,
    jfloat defaultHeight,
    jboolean isWidthWrapContent,
    jboolean isHeightWrapContent);

static void OnInstanceClose(JNIEnv* env, jobject jcaller,
    jstring instanceId);

static void ForceLayout(JNIEnv* env, jobject jcaller,
    jstring instanceId);

static jboolean NotifyLayout(JNIEnv* env, jobject jcaller,
    jstring instanceId);

static void SetStyleWidth(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring ref,
    jfloat value);

static void SetStyleHeight(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring ref,
    jfloat value);

static void SetMargin(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring ref,
    jint edge,
    jfloat value);

static void SetPadding(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring ref,
    jint edge,
    jfloat value);

static void SetPosition(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring ref,
    jint edge,
    jfloat value);

static void MarkDirty(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jstring ref,
    jboolean dirty);

static void RegisterCoreEnv(JNIEnv* env, jobject jcaller,
    jstring key,
    jstring value);

static void SetViewPortWidth(JNIEnv* env, jobject jcaller,
    jstring instanceId,
    jfloat value);

static void UpdateGlobalConfig(JNIEnv* env, jobject jcaller,
    jstring config);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsWXBridge[] = {
    { "nativeInitFrameworkEnv",
"("
"Ljava/lang/String;"
"Lcom/taobao/weex/bridge/WXParams;"
"Ljava/lang/String;"
"Z"
")"
"I", reinterpret_cast<void*>(InitFrameworkEnv) },
    { "nativeInitFramework",
"("
"Ljava/lang/String;"
"Lcom/taobao/weex/bridge/WXParams;"
")"
"I", reinterpret_cast<void*>(InitFramework) },
    { "nativeExecJS",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"[Lcom/taobao/weex/bridge/WXJSObject;"
")"
"I", reinterpret_cast<void*>(ExecJS) },
    { "nativeExecJSService",
"("
"Ljava/lang/String;"
")"
"I", reinterpret_cast<void*>(ExecJSService) },
    { "nativeExecJSWithResult",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"[Lcom/taobao/weex/bridge/WXJSObject;"
")"
"[B", reinterpret_cast<void*>(ExecJSWithResult) },
    { "nativeCreateInstanceContext",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"[Lcom/taobao/weex/bridge/WXJSObject;"
")"
"I", reinterpret_cast<void*>(CreateInstanceContext) },
    { "nativeDestoryInstance",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"[Lcom/taobao/weex/bridge/WXJSObject;"
")"
"I", reinterpret_cast<void*>(DestoryInstance) },
    { "nativeExecJSOnInstance",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"Ljava/lang/String;", reinterpret_cast<void*>(ExecJSOnInstance) },
    { "nativeTakeHeapSnapshot",
"("
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(TakeHeapSnapshot) },
    { "nativeBindMeasurementToWXCore",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Lcom/taobao/weex/layout/ContentBoxMeasurement;"
")"
"V", reinterpret_cast<void*>(BindMeasurementToWXCore) },
    { "nativeSetRenderContainerWrapContent",
"("
"Z"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(SetRenderContainerWrapContent) },
    { "nativePrintFirstScreenRenderTime",
"("
"Ljava/lang/String;"
")"
"I", reinterpret_cast<void*>(PrintFirstScreenRenderTime) },
    { "nativePrintRenderFinishTime",
"("
"Ljava/lang/String;"
")"
"I", reinterpret_cast<void*>(PrintRenderFinishTime) },
    { "nativeSetDefaultHeightAndWidthIntoRootDom",
"("
"Ljava/lang/String;"
"F"
"F"
"Z"
"Z"
")"
"V", reinterpret_cast<void*>(SetDefaultHeightAndWidthIntoRootDom) },
    { "nativeOnInstanceClose",
"("
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(OnInstanceClose) },
    { "nativeForceLayout",
"("
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(ForceLayout) },
    { "nativeNotifyLayout",
"("
"Ljava/lang/String;"
")"
"Z", reinterpret_cast<void*>(NotifyLayout) },
    { "nativeSetStyleWidth",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"F"
")"
"V", reinterpret_cast<void*>(SetStyleWidth) },
    { "nativeSetStyleHeight",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"F"
")"
"V", reinterpret_cast<void*>(SetStyleHeight) },
    { "nativeSetMargin",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"F"
")"
"V", reinterpret_cast<void*>(SetMargin) },
    { "nativeSetPadding",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"F"
")"
"V", reinterpret_cast<void*>(SetPadding) },
    { "nativeSetPosition",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
"F"
")"
"V", reinterpret_cast<void*>(SetPosition) },
    { "nativeMarkDirty",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Z"
")"
"V", reinterpret_cast<void*>(MarkDirty) },
    { "nativeRegisterCoreEnv",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(RegisterCoreEnv) },
    { "nativeSetViewPortWidth",
"("
"Ljava/lang/String;"
"F"
")"
"V", reinterpret_cast<void*>(SetViewPortWidth) },
    { "nativeUpdateGlobalConfig",
"("
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(UpdateGlobalConfig) },
};

static bool RegisterNativesImpl(JNIEnv* env) {

  g_WXBridge_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kWXBridgeClassPath).Get()));

  const int kMethodsWXBridgeSize =
      sizeof(kMethodsWXBridge)/sizeof(kMethodsWXBridge[0]);

  if (env->RegisterNatives(WXBridge_clazz(env),
                           kMethodsWXBridge,
                           kMethodsWXBridgeSize) < 0) {
    //jni_generator::HandleRegistrationError(
    //    env, WXBridge_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // com_taobao_weex_bridge_WXBridge_JNI
