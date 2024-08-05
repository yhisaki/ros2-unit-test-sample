cmake_minimum_required(VERSION 3.8)

project(package1)

# ament_auto_find_build_dependencies()
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_auto REQUIRED)
find_package(ament_cmake_gtest REQUIRED)

ament_auto_add_library(package1 SHARED
  src/package1.cpp)

if(BUILD_TESTING)
  ament_add_gtest(test_package1
    test/test_package1.cpp)
  target_link_libraries(test_package1 package1)
endif()

ament_auto_package()
