#include "package1/package1.hpp"
#include <gtest/gtest.h>

TEST(Package1, func) {
  EXPECT_EQ(func(true, false, false), -1);
  // EXPECT_EQ(func(false, true, false), 1);
  // EXPECT_EQ(func(false, false, true), 1);
  // EXPECT_EQ(func(true, true, true), 3);
  // EXPECT_EQ(func(true, true, false), 1);
  // EXPECT_EQ(func(true, false, true), 1);
  // EXPECT_EQ(func(false, true, true), 1);
  // EXPECT_EQ(func(false, false, false), -3);
}