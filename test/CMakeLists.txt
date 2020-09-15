set(PROJECT_UNITTEST_NAME   "codecoverageexample_unittests")

project(${PROJECT_UNITTEST_NAME} LANGUAGES CXX)

include_directories(PUBLIC ${CMAKE_SOURCE_DIR}/models/include)

add_executable(${PROJECT_UNITTEST_NAME} ${INCLUDE_PATH}
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/employee_unittest.cpp)
  
target_link_libraries(${PROJECT_UNITTEST_NAME} PRIVATE models ${CONAN_LIBS})
gtest_discover_tests(${PROJECT_UNITTEST_NAME})