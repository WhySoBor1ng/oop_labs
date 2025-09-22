add_library(task task.cpp)

add_executable(main main.cpp)

target_link_libraries(main task)