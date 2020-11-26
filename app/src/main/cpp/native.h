/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <pthread.h>
#include <unistd.h>
#include <android/log.h>
#include <sys/system_properties.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <string>
#include <dlfcn.h>
#include <string.h>
#include "dlopen.h"
#include "util/deviceutils.h"
#include "util/fileutils.h"

#if defined(__aarch64__)

#include "And64InlineHook.hpp"

#elif defined(__arm__)
#include "inlineHook.h"
#endif

#ifndef _Included_com_hypdncy_xposeddemo_Native
#define _Included_com_hypdncy_xposeddemo_Native
#ifdef __cplusplus
extern "C" {

#endif
/*
 * Class:     com_hypdncy_xposeddemo_Native
 * Method:    test
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT void JNICALL Java_com_hypdncy_dumpdex_Native_dump
        (JNIEnv *, jclass, jstring);


#ifdef __cplusplus
}
#endif
#endif
