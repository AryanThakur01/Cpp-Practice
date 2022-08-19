#include <iostream>
using namespace std;

class BaseClass
{
public:
    int varBase;
    void display()
    {
        cout << "Displaying Base class variable varBase " << varBase << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int varDerived;
    void display()
    {
        cout << "Dispaying Base Class variable varBase: " << varBase << endl;
        cout << "Displaying derived class variable vardDerived: " << varDerived << endl;
    }
};

int main()
{
// Here is runtime polymorphism because it is decided during runtime that which display must run
    BaseClass *baseClassPointer;
    BaseClass objBase;
    DerivedClass objDerived;
    baseClassPointer = &objDerived; // Pointing base class pointer to derived class

    baseClassPointer->varBase = INT_MAX;
    // baseClassPointer->varDerived = INT_MAX;      //It will throw an ERROR!!
    baseClassPointer->display();

    DerivedClass *derivedClassPointer;
    derivedClassPointer = &objDerived;
    derivedClassPointer->varBase = 18;
    derivedClassPointer->varDerived = 19912;
    derivedClassPointer->display();

    return 0;
}