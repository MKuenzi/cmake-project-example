add_executable(tests main.cpp)
set_property(TARGET application PROPERTY CXX_STANDARD 14)
target_link_libraries(tests gtest gtest_main library)