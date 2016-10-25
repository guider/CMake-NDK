#include <jni.h>
#include <string>

//extern “C” 是表示可以供外部调用。
extern "C"
jstring
Java_com_yanyuanquan_cmakedemo2_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());


}

