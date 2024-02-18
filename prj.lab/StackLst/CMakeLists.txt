add_library(StackLst StackLst.cpp StackLst.h)
#set_property(TARGET StackArr PROPERTY CXX_STANDARD 20)
target_include_directories(StackLst PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:include>
        )
install(TARGETS StackLst)
