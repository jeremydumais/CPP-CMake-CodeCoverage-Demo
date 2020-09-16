cmake_minimum_required(VERSION 3.10)

project("CPP-CMAKE-CODECOVERAGE-DEMO")
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake/modules)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include(CodeCoverage)
append_coverage_compiler_flags()

enable_testing()

include(GoogleTest)

add_subdirectory("models")
add_subdirectory("app")
add_subdirectory("test")