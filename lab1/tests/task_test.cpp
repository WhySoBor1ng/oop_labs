#include <gtest/gtest.h>
#include "task.h"

TEST(FindMaxDividendTests, FindMaxDividendTest) 
{
    EXPECT_EQ(find_max_dividend(3, 5), 3);

    EXPECT_EQ(find_max_dividend(6, 12), 12);

    EXPECT_EQ(find_max_dividend(13, 5), -1);

    EXPECT_EQ(find_max_dividend(15, 80), 75);

    EXPECT_EQ(find_max_dividend(4, 9), 8);
}