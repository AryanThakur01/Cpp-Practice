#include <iostream>

using namespace std;

int main()
{
    // What is a pointer -----> data type which holds the address of other data types

    int a = 3;
    int *b = &a;

    // &--> (address of) operator
    cout << "The address of a(using b) is: " << b << endl;
    cout << "The address of a(using &a) is: " << &a << endl;

    // &--> Dereference operator
    cout << "The value at address b is: " << *b << endl;

    // pointer to pointer
    int** c = &b;
    cout << "The address of b is: " << c << endl;
    cout << "The address of b is: " << &b << endl;
    cout << "The value at address c is: " << *c << endl;
    cout << "The value at address value_at(value_at(c)): " << **c << endl;


    return 0;
}