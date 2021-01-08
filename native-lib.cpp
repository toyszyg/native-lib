#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
    JNIEnv * env,
    jobject /* this */) {
    std::string hello = "Hello from B++";
    return env->NewStringUTF(hello.c_str());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_src_test__stringFromJNI(
    JNIEnv * env,
    jobject /* this */) {
    std::string hello = "Hello from B++";
    return env->NewStringUTF(hello.c_str());
}
