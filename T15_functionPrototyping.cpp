#include <iostream>

using namespace std;

int sum(int a, int b){
    // a and b are formal parameters(also known as PARAMETERS)
    int c = a+b;
    return c;
}

// Function prototype
// Syntax: type function-name (arguments)
// int difference(int a, int b);        : ACCEPTABLE
// int difference(int a, b);        :  NOT ACCEPTABLE
int difference(int, int);        // ACCEPTABLE

// void greet();            //ACCEPTABLE
void greet(void);           //ACCEPTABLE

int main()
{
    int num1, num2;
    cout<< "Enter the first number"<< endl;
    cin >> num1;
    cout<<"Enter the second number"<< endl;
    cin>> num2;

    cout<< "The sum of two numbers entered is: "<<sum(num1, num2)<< endl;
    // num1 and num2 are actual parameters(also known as ARGUMENTS)
    cout << "The difference of two numbers(b - a) is: "<< difference(num1, num2)<< endl;
    
    greet();
    
    return 0;
}

int difference(int a, int b){
    int c = b-a;
    return c;
}
void greet()
{
    printf("Hello good morning");
}