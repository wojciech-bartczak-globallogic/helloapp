cmake_minimum_required(VERSION 3.10)

project(hello LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(hello main.cc)

include(GNUInstallDirs)
install(TARGETS hello
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
