#include "gtest/gtest.h"
#include "squareroot_newton.hh"
#include <iostream>

// Tests factorial of 0.
TEST(squareroot_newton, KnownAnswerTest) {
      for(int i=1;i<10000;i++){
        ASSERT_EQ(newtonsquareroot(i*i, 1),i);
      }
}




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}