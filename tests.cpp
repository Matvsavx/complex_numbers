#include "gtest/gtest.h"
#include "lib.h"

TEST(Find_sum, expectedSum) {

    complex_number a {1,3}, b {2,2};
    complex_number sum = a + b;

    EXPECT_EQ(2, sum.a2);
    EXPECT_EQ(5, sum.b2);
}

TEST(Find_sub, expectedSub) {

    complex_number a {10,2}, b {5,1};
    complex_number sub = a - b;

    EXPECT_EQ(0, sub.a2);
    EXPECT_EQ(1, sub.b2);
}

TEST(Find_div, expectedDiv) {

    complex_number a {11,1}, b {7,11};
    complex_number div = a / b;

    EXPECT_EQ(0, div.a2);
    EXPECT_EQ(0, div.b2);
}

TEST(Find_mul, expectedMul) {

    complex_number a {1,9}, b {8,3};
    complex_number mul = a * b;

    EXPECT_EQ(-19, mul.a2);
    EXPECT_EQ(75, mul.b2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
