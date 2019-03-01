set(SRC_LIST 
  hello.cc
	)

add_library(hello STATIC ${SRC_LIST})
add_library(hello_shared SHARED ${SRC_LIST})
set_target_properties(hello_shared PROPERTIES OUTPUT_NAME "hello")
set_target_properties(hello PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(hello_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(hello_shared PROPERTIES VERSION 1.2 SOVERSION 1)

install(FILES hello.h DESTINATION include)
install(TARGETS hello DESTINATION lib)
install(TARGETS hello_shared DESTINATION lib)

#include_directories(/home/renjiangou/CMAKE)
include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(test)
