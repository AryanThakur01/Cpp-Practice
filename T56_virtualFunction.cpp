#include <iostream>
using namespace std;
class BaseClass
{
public:
    int varBase = 1;
    virtual void display()
    {
        cout << "Displaying Base class variable varBase " << varBase << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int varDerived = 2;
    void display()
    {
        cout << "Dispaying Base Class variable varBase: " << varBase << endl;
        cout << "Displaying derived class variable vardDerived: " << varDerived << endl;
    }
};

int main()
{
    BaseClass *baseClassPointer;
    BaseClass objBase;
    DerivedClass objDerived;
    baseClassPointer = &objDerived;
    baseClassPointer->display();
    return 0;
}