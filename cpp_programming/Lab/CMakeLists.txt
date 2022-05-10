cmake_minimum_required(VERSION 3.0.0)
project(20_static VERSION 0.1.0)

include(CTest)
enable_testing()

add_compile_options(-Wall)

add_executable(20_static 20_static.cpp 20_class.h 20_class.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
