#include "employee.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Employee myEmployee(1, "Joe", "Blow");
    cout << myEmployee << "\n";
    return 0;
}