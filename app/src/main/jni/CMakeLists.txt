cmake_minimum_required(VERSION 3.4.1)
#设置生成的so动态库最后输出的路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI})
add_library( # Sets the name of the library.
          JNITestSample

          SHARED

          com_xiaoyuan_jnitestsample_JNIUtil.cpp
          )

target_link_libraries(JNITestSample log)
