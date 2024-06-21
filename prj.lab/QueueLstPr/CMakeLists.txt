add_library(QueueLstPr QueueLstPr.cpp QueueLstPr.h ../../prj.test/test_QueueLstPr.cpp)
#set_property(TARGET StackArr PROPERTY CXX_STANDARD 20)
target_include_directories(QueueLstPr PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:include>
        )
install(TARGETS QueueLstPr)
