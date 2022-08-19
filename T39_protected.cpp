#include <iostream>

using namespace std;

class Base
{
protected: // The data inside this can be inherited
    int a;

private:
    int b;
};

/*
                Public Derivation   Private Derivation  Protected Derivation
private members:    Not inherited   Not inherited       Not Inherited
Proctected members: protected       private             Protected
Public members:     public          private             Protected
*/
class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<< b.a;  //will not work since a is protected in this as well as derived class

    return 0;
}