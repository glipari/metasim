#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <tick.hpp>

#include "gtest/gtest.h"

using namespace MetaSim;
using namespace std;

TEST(TestTick, testBoolean)
{
    Tick a;
    Tick b(5);
    Tick c(5);

    EXPECT_TRUE(a < b);
    EXPECT_TRUE(b == c);
    EXPECT_TRUE(c >= a);
}

TEST(TestTick,testOperations)
{
    Tick a;
    Tick b(100);
    Tick c("4ns");
    Tick d(".4us");

    EXPECT_TRUE(100*c == d);
    EXPECT_TRUE(a+b == 100);
    EXPECT_TRUE(b/100 == 1);
    EXPECT_TRUE(a++ == 0);
    EXPECT_TRUE(++a == 2);
    EXPECT_TRUE(d/400 == 1);
}



