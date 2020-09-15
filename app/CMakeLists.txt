set(PROJECT_NAME   "app")
project(${PROJECT_NAME} C CXX)

include_directories(PUBLIC ${CMAKE_SOURCE_DIR}/models/include)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} models)