#include "employee.h"
#include <gtest/gtest.h>

using namespace std;

TEST(Employee_Constructor, AllValidArgs_ReturnSuccess)
{
    Employee sample(1, "Joe", "Blow");
}
