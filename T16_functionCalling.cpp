#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b
// The knumbers won't be swapped because we are sending the copy of variables in the function which means that the actual numbers won't be swapped
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// int & swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

int main()
{
    int x = 4, y = 5;
    cout << "The sum of 4 and 5 is: " << sum(x, y) << endl;

    cout << "Before swaping the numbers" << endl;
    cout << "The value of x is " << x << " The value of y is " << y << endl;

    // swap(x, y);             // This will not swap a and b
    // swapPointer(&x, &y);    // This will swap a and b using poiunter reference
    swapReferenceVar(x, y); // This will swap a and b using reference variables

    // swapReferenceVar(x, y) = 766;

    cout << "After swaping the numbers" << endl;
    cout << "The value of x is " << x << " The value of y is " << y << endl;

    return 0;
}