add_library(rational rational.cpp rational.hpp)
target_include_directories(rational PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
        $<INSTALL_INTERFACE:include>
)
install(TARGETS rational)
