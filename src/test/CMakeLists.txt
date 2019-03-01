add_executable(main main.cc)
target_link_libraries(main hello json)
add_test(NAME main COMMAND main)
