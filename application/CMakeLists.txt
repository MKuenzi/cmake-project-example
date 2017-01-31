add_executable(application main.cpp)
set_property(TARGET application PROPERTY CXX_STANDARD 14)

target_link_libraries(application library)