﻿
add_executable(test_StackArr test_StackArr.cpp)
target_link_libraries(test_StackArr StackArr)
target_link_libraries(test_StackArr complex)
#set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT test_StackArr)

add_executable(complex_test complex_test.cpp test_QueueLstPr.cpp "../prj.app/timing-q/timing-q .cpp")
target_link_libraries(complex_test complex)

add_executable(rational_test rational_test.cpp)
target_link_libraries(rational_test rational)

add_executable(dynarr_test dynarr_test.cpp)
target_link_libraries(dynarr_test dynarr)

add_executable(test_StackLst test_StackLst.cpp)
target_link_libraries(test_StackLst StackLst)
target_link_libraries(test_StackLst complex)

add_executable(test_QueueLst test_QueueLst.cpp)
target_link_libraries(test_QueueLst QueueLst)
target_link_libraries(test_QueueLst complex)

add_executable(test_QueueLstPr test_QueueLstPr.cpp)
target_link_libraries(test_QueueLstPr QueueLstPr)
target_link_libraries(test_QueueLstPr complex)


add_executable(test_QueueArr test_QueueArr.cpp)
target_link_libraries(test_QueueArr QueueArr)
target_link_libraries(test_QueueArr complex)