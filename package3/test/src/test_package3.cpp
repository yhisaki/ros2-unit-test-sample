#include "package3/package3.hpp"
#include <gtest/gtest.h>
#include <iostream>

TEST(Package3, dangerous_function) {
  std::cout << "dangerous_function() = " << dangerous_function() << std::endl;
}
