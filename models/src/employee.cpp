#include "employee.h"
#include <stdexcept>

using namespace std;

Employee::Employee(unsigned int id, 
             const std::string & firstName,
             const std::string &lastName) 
    : id {id},
      firstName {firstName},
      lastName {lastName}
{
    if (id == 0) {
        throw invalid_argument("id must be greater than zero.");
    }
}

unsigned int Employee::getId() const
{
    return id;
}

const std::string& Employee::getFirstName() const
{
    return firstName;
}

const std::string& Employee::getLastName() const
{
    return lastName;
}

std::ostream& operator<<(std::ostream &os, const Employee &emp)
{
    os << emp.firstName << " " << emp.lastName;
    return os;
}
