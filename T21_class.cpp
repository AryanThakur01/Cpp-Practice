// structure do not have data hiding so structure is not safe
// Also we cannot enter functions in structure
#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c; // Only functions inside class can access these variables
public:
    int d, e;
    void setData(int a, int b, int c); // Declaration           //setData is a function
    // void setData(int , int , int );  //Can be declared like this as well
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
};

int main()
{
    Employee harry;
    harry.d = 34;
    harry.e = 89;
    // harry.a = 1321;          //This will throw an error as a is private

    harry.setData(1, 2, 3);
    harry.getData();

    return 0;
}