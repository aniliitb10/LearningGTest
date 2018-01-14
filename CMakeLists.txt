cmake_minimum_required(VERSION 3.9)
project(LearningGTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(LearningGTest main.cpp)
target_link_libraries(LearningGTest ${GTEST_PATH} pthread)