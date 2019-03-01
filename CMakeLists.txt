cmake_minimum_required(VERSION 2.8)

project(myhelloworld C CXX)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

#检查第三方库(默认将从标准路径查找)
find_path(JSON_HEADER json/json.h)
if(JSON_HEADER)
	message(STATUS "find json.h")
endif()
find_library(JSON_LIBRARY NAMES json)
if(JSON_LIBRARY)
	message(STATUS "find json-library")
endif()

add_subdirectory(src)

#这是编译路径(默认情况下与项目路径相同)
message(STATUS "PROJECT_BINARY_DIR is " ${PROJECT_BINARY_DIR})
#这是项目路径
message(STATUS "PROJECT_SOURCE_DIR is " ${PROJECT_SOURCE_DIR})
