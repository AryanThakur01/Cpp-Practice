// RECURSION & RECURSIVE FUNCTIONS IN CPP
// Sometimes recursions are better and other times iteration is better
#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact;
    if (n == 0 || n == 1)
    {
        fact = 1;
    }
    else if (n > 1)
    {
        fact = n * factorial(n - 1);
    }
    else
    {
        fact = 0;
    }

    return fact;
}

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
// fib(5)
// fib(4)+ fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)


int main()
{
    int num;
    // cout << "Enter a number whose factorial you wish to get of: ";
    // cin >> num;
    // cout << num << "! = " << factorial(num) << endl;

    cout<<"Enter a number you want to get the "<<endl;
    cin>> num;
    cout<<"The number at the "<<num<<" index is "<<fib(num);

    return 0;
}