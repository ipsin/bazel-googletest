#include <gtest/gtest.h>

#include "adder.h"

TEST(Addinate, TestAdd) {
  examples::Adder x;
  EXPECT_EQ(9, x.add(3,6));
}
