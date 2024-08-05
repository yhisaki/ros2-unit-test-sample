cmake_minimum_required(VERSION 3.8)

project(package1)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

ament_auto_add_library(package1 SHARED
  src/package1.cpp)

if(BUILD_TESTING)
  ament_auto_find_test_dependencies()
  ament_add_gtest(test_package1
    test/test_package1.cpp)
  target_link_libraries(test_package1 package1)
endif()

ament_auto_package()
