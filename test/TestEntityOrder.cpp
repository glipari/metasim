#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "myentity.hpp"

#include "gtest/gtest.h"

using namespace std;

TEST(TestEventOrder, testPost)
{ 
    MyEntity me("Pippo");
    SIMUL.run(12);
    EXPECT_TRUE(me.isAFirst());
    EXPECT_TRUE(me.getCounter() == 2);
}
