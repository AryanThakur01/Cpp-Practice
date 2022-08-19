#include <iostream>

using namespace std;

// Base Class
class Employee
{
public:
    int languageCode = 10;
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {} // To use this class as base class we need a default constructor
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Notes:
1. Default visibility mode is private
2. Public visibility mode: Public members of the base class becomes public members of the derived class
3. Private visibility mode: Public members of the base class becomes private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(3);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();

    return 0;
}