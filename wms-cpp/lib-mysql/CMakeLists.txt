﻿# CMakeList.txt: lib-mysql 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 包含库目录
include_directories ("./")
include_directories ("include")

# 获取需要编译的源文件
file (GLOB_RECURSE SC_FILES src/*.cpp)

# 生成静态库
add_library (lib-mysql STATIC ${SC_FILES})

# 静态库输出名修改
set_target_properties (lib-mysql PROPERTIES OUTPUT_NAME mysql)
# 防止同名库被删除
set_target_properties (lib-mysql PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# 安装库
#install (TARGETS lib-mysql ARCHIVE DESTINATION libstatic)
#install (DIRECTORY include/ DESTINATION include/lib-mysql)
