add_executable(test_add test_add.cpp)
target_link_libraries(test_add gtest gtest_main pthread add)
