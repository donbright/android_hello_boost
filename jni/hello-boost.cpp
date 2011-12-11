// this code has been modified from its original form
// original license follows
/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <jni.h>
#include "first.h"

extern "C" {
JNIEXPORT jstring JNICALL Java_com_example_helloboost_HelloBoost_stringFromJNI( 
	JNIEnv* env, jobject thiz );
}

JNIEXPORT jstring JNICALL
Java_com_example_helloboost_HelloBoost_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{
	const char *args[]={"jni","--change-world","hello","world"};
	std::string result = hello_boost(4,(char **)args);
	const char *c_result = result.c_str();
	return env->NewStringUTF(c_result);
}
