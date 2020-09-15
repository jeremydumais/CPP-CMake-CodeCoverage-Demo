#pragma once

#include <string>

class Employee
{
public:
    Employee(unsigned int id, 
             const std::string & firstName,
             const std::string &lastName);
    unsigned int getId() const;
    const std::string &getFirstName() const;
    const std::string &getLastName() const;
private:
    unsigned int id;
    std::string firstName;
    std::string lastName;
};
