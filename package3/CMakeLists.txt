cmake_minimum_required(VERSION 3.8)

project(package3)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

ament_auto_add_library(package3 SHARED
  src/package3.cpp)

if(BUILD_TESTING)
  ament_auto_find_test_dependencies()
  ament_add_gtest(test_package3
    test/src/test_package3.cpp)
  target_link_libraries(test_package3 package3)
endif()

ament_auto_package()
