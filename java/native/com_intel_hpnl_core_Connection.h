/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_hpnl_core_Connection */

#ifndef _Included_com_intel_hpnl_core_Connection
#define _Included_com_intel_hpnl_core_Connection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intel_hpnl_core_Connection
 * Method:    recv
 * Signature: (Ljava/nio/ByteBuffer;IJ)V
 */
JNIEXPORT void JNICALL Java_com_intel_hpnl_core_Connection_recv
  (JNIEnv *, jobject, jobject, jint, jlong);

/*
 * Class:     com_intel_hpnl_core_Connection
 * Method:    send
 * Signature: (IIJ)I
 */
JNIEXPORT jint JNICALL Java_com_intel_hpnl_core_Connection_send
  (JNIEnv *, jobject, jint, jint, jlong);

/*
 * Class:     com_intel_hpnl_core_Connection
 * Method:    read
 * Signature: (IIJJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_intel_hpnl_core_Connection_read
  (JNIEnv *, jobject, jint, jint, jlong, jlong, jlong, jlong);

/*
 * Class:     com_intel_hpnl_core_Connection
 * Method:    init
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_hpnl_core_Connection_init
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_hpnl_core_Connection
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_hpnl_core_Connection_finalize
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_hpnl_core_Connection
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_hpnl_core_Connection_free
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif