add_executable(task_test main.cpp task_test.cpp)

target_link_libraries(task_test gtest gtest_main task)

include(GoogleTest)
gtest_discover_tests(task_test)