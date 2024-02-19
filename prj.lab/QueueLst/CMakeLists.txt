add_library(QueueLst QueueLst.cpp QueueLst.h)
#set_property(TARGET StackArr PROPERTY CXX_STANDARD 20)
target_include_directories(QueueLst PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:include>
        )
install(TARGETS QueueLst)
