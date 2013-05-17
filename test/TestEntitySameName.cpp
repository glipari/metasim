#include <iostream>
#include <memory>
#include <entity.hpp>
#include "myentity.hpp"

#include "gtest/gtest.h"

using namespace MetaSim;

TEST(TestEntitySameName, testName)
{
    std::unique_ptr<MyEntity> me(new MyEntity("name"));

    Entity *p = Entity::_find("name");
    EXPECT_TRUE( p == me.get() );
    EXPECT_TRUE( p == Entity::getPointer( me->getID() ) );
    
    try {
        MyEntity e2("name");
        EXPECT_TRUE( false );
    } catch (...) {
        EXPECT_TRUE( true );
    }
    p = Entity::getPointer( me->getID() + 1 );
    EXPECT_TRUE( p == 0 );
}
