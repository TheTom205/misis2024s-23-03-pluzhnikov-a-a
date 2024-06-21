add_library(QueueArr QueueArr.cpp QueueArr.h ../../prj.test/test_QueueArr.cpp)
#set_property(TARGET StackArr PROPERTY CXX_STANDARD 20)
target_include_directories(QueueArr PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:include>
        )
install(TARGETS QueueArr)
