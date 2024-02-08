
add_executable(test_StackArr test_StackArr.cpp)
target_link_libraries(test_StackArr StackArr)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT test_StackArr)