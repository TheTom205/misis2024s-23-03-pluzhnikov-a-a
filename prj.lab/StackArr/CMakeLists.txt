add_library(StackArr StackArr.cpp StackArr.h ../../prj.test/test_StackArr.cpp)
#set_property(TARGET StackArr PROPERTY CXX_STANDARD 20)
target_include_directories(StackArr PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:include>
        )
install(TARGETS StackArr)
