#include "employee.h"
#include <gtest/gtest.h>

using namespace std;

TEST(Employee_Constructor, AllValidArgs_ReturnSuccess)
{
    Employee sample(1, "Joe", "Blow");
}

TEST(Employee_Constructor, IdIsZero_ThrowInvalidArgument)
{
    try {
        Employee sample(0, "Joe", "Blow");
        FAIL();
    }
    catch(invalid_argument &err) {
        ASSERT_STREQ("id must be greater than zero.", err.what());
    }
}
