#include "package1/package1.hpp"
#include <gtest/gtest.h>

TEST(Package1, func) {
  EXPECT_EQ(func(true, false, false), -1);
  EXPECT_EQ(func(true, true, false), 1);
}

TEST(Package1, add_world) {
  EXPECT_EQ(add_world("hello"), "hello world!");
}