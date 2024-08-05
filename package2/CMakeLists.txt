cmake_minimum_required(VERSION 3.8)

project(package2)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

ament_auto_add_library(package2 SHARED
  src/package2.cpp)

ament_auto_add_executable(package2_node
  src/main.cpp)

if(BUILD_TESTING)
  ament_auto_find_test_dependencies()
  ament_add_gtest(test_package2
    test/test_package2.cpp)
  target_link_libraries(test_package2 package2)
endif()

ament_auto_package()
