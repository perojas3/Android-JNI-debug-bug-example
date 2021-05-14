#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_android_1c_TestJNI_test_1string(JNIEnv *env, jobject thiz) {
    char test_hello[] = "Hola_C";
    jstring j_test_hello = (*env)->NewStringUTF(env, test_hello);

    // return the java string
    return j_test_hello;
}