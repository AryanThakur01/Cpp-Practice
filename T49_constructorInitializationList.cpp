#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argumant-list) : initialization-section
{
    assignment + other code;
}

class Test {
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
}
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i*i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(j + a)
    // Test(int i, int j) : b(j), a(i + b)     // --> red flag this will create problems because a must be initialized first
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed " << endl;
        cout << "value of a is: " << a << endl;
        cout << "value of b is: " << b << endl;
    }
};

int main()
{
    Test aryan(4, 6);
    return 0;
}