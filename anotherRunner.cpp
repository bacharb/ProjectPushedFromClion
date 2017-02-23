#include <limits.h>
#include "sample1.hpp"
#include "gtest/gtest.h"

TEST(MyFirstTestGtest_TestName_Test, TestName) {
}

class SuiteName : public ::testing::Test {

};

TEST(FactorialTest, Negative) {
	// This test is named "Negative", and belongs to the "FactorialTest"
	// test case.
	EXPECT_EQ(1, Factorial(-5));
	EXPECT_EQ(1, Factorial(-1));
	EXPECT_GT(Factorial(-10), 0);
}

