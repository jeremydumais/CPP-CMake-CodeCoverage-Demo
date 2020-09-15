set(PROJECT_NAME   "models")
project(${PROJECT_NAME} C CXX)

include_directories(PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(${PROJECT_NAME} src/employee.cpp)