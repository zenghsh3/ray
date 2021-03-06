/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ray_runtime_actor_NativeRayActor */

#ifndef _Included_org_ray_runtime_actor_NativeRayActor
#define _Included_org_ray_runtime_actor_NativeRayActor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeFork
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_ray_runtime_actor_NativeRayActor_nativeFork(JNIEnv *,
                                                                             jclass,
                                                                             jlong);

/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeGetActorId
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_runtime_actor_NativeRayActor_nativeGetActorId(JNIEnv *, jclass, jlong);

/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeGetActorHandleId
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_runtime_actor_NativeRayActor_nativeGetActorHandleId(JNIEnv *, jclass, jlong);

/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeGetLanguage
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL
Java_org_ray_runtime_actor_NativeRayActor_nativeGetLanguage(JNIEnv *, jclass, jlong);

/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeGetActorCreationTaskFunctionDescriptor
 * Signature: (J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL
Java_org_ray_runtime_actor_NativeRayActor_nativeGetActorCreationTaskFunctionDescriptor(
    JNIEnv *, jclass, jlong);

/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeSerialize
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_runtime_actor_NativeRayActor_nativeSerialize(JNIEnv *, jclass, jlong);

/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeDeserialize
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL
Java_org_ray_runtime_actor_NativeRayActor_nativeDeserialize(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     org_ray_runtime_actor_NativeRayActor
 * Method:    nativeFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_ray_runtime_actor_NativeRayActor_nativeFree(JNIEnv *,
                                                                            jclass,
                                                                            jlong);

#ifdef __cplusplus
}
#endif
#endif
