#include <iostream>

using namespace std;

int main()
{

    int num1, num2;



    cout<< "Enter the value of num1:\n";        // << this is called insertion operator
    cin>> num1;     // >> this is known as extraction operator


    cout<< "Enter the value of num2:\n";        // << this is called insertion operator
    cin>> num2;     // >> this is known as extraction operator

    cout<< "The sum of the numbers is "<< num1 + num2;

    return 0;   
}