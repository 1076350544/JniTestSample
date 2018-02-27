/**
 * Created by xiaoyuan on 17/5/15.
 */

#include "com_xiaoyuan_jnitestsample_JNIUtil.h"
#include <android/log.h>
//log定义
#define  LOG    "JNILOG" // 这个是自定义的LOG的TAG
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG,__VA_ARGS__) // 定义LOGD类型
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG,__VA_ARGS__) // 定义LOGI类型
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...)  __android_log_print(ANDROID_LOG_FATAL,LOG,__VA_ARGS__) // 定义LOGF类型

JNIEXPORT jstring JNICALL Java_com_xiaoyuan_jnitestsample_JNIUtil_getWorld(JNIEnv *env, jobject obj)
{
    jstring str = (jstring) "what a fucking good test";
    LOGE("str=%s", str);
    return env -> NewStringUTF("Hello World!");
}
