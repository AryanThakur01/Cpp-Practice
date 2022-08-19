// PRACTICE PROBLEM
// (exercise)

/*
Create 2 classes:
    1. SimpleCalculator     :Takes input of 2 numbers using a utility function and performs +, -, *, / and display the results using another function
    2. ScientifiCalculator  :Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and display the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include <iostream>
#include <math.h>

using namespace std;

int factorial(int num)
{
    if (num < 0)
    {
        cout << "The calculation of factorial of a number below 0 is not possible" << endl;
        return 0;
    }
    else if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

class SimpleCalculator
{
protected:
    float addNumbers(float a, float b)
    {
        return a + b;
    }
    float subtractNumbers(float a, float b)
    {
        return a - b;
    }
    float multiplyNumbers(float a, float b)
    {
        return a * b;
    }
    float divideNumbers(float a, float b)
    {
        return a / b;
    }
};

class ScientificCalculator
{

protected:
    int exponent(float a, int b)
    {
        return pow(a, b);
    }
    int factorial_number(int a)
    {
        return factorial(a);
    }
    void logarithm(int a)
    {
        cout << log10(a);
    }
    int sin(int a)
    {
        return sin(a);
    }
};

class HybridCalculator : private SimpleCalculator, private ScientificCalculator
{
public:
    HybridCalculator(int);
};

HybridCalculator ::HybridCalculator(int calcType)
{
    if (calcType == 2)
    {
        cout << "Enter the function you want to perform" << endl
             << "\t[1] for exponential " << endl
             << "\t[2] for factorial " << endl
             << "\t[3] for logarithmic with base 10 " << endl
             << "\t[4] for sin " << endl;
        int function;
        cin >> function;
        if (function == 1)
        {
            float base;
            int exp;
            cout << "base: ";
            cin >> base;
            cout << "Exponent: ";
            cin >> exp;
            cout << exponent(base, exp);
        }
        else if (function == 2)
        {
            int num;
            cout << "Enter the number: ";
            cin >> num;
            cout << factorial_number(num);
        }
        else if (function == 3)
        {
            int num;
            cout << "Enter the number: ";
            cin >> num;
            logarithm(num);
        }
        else
        {
            int num;
            cout << "Enter the number: ";
            cin >> num;
            cout << sin(num);
        }
    }
    else
    {
        cout << "Enter the function you want to perform" << endl
             << "\t[1] for addition " << endl
             << "\t[2] for subtraction " << endl
             << "\t[3] for multiplication " << endl
             << "\t[4] for division " << endl;
        int function;
        cin >> function;
        float a, b;
        cout << "Enter the first integer: ";
        cin >> a;
        cout << "Enter the second integer: ";
        cin >> b;
        if (function == 1)
        {
            cout << addNumbers(a, b);
        }
        else if (function == 2)
        {
            cout << subtractNumbers(a, b);
        }
        else if (function == 3)
        {
            cout << multiplyNumbers(a, b);
        }
        else
        {
            cout << divideNumbers(a, b);
        }
    }
};

int main()
{
    cout << log10(40);
    cout << "Enter a number as per your requirement:" << endl
         << "[1] for simpleCalculator" << endl
         << "[2] for scientific calculator" << endl;
    int calcType;
    cin >> calcType;
    HybridCalculator calculate(calcType);
    return 0;
}