#include "CppUTest/TestHarness.h"
#include "stdio.h"

TEST_GROUP(myFirstUnitTest)
{
	
};

TEST(myFirstUnitTest, API1)
{
    FAIL("I am Failed!");
}

TEST(myFirstUnitTest, API2)
{
    STRCMP_EQUAL("Hello", "Hello");
}
