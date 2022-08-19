#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // int a = 34;
    // cout<< "The value of a is "<< a;

    // a = 45;
    // cout<< "The value of a is "<< a;
// This means that we can change the value of a



// CONSTANTS IN C++
    // const int b = 55;
    // b = 25; You will get an error because b is a constant



// MANIPULATORS IN C++
    // int a = 31, b = 403, c = 5325;

    // cout<< "the value of a is "<<a<< endl;
    // cout<< "the value of b is "<<b<< endl;
    // cout<< "the value of c is "<<c<< endl;

    // cout<< "the value of a is "<<setw(4)<< a<< endl;
    // cout<< "the value of b is "<<setw(4)<< b<< endl;
    // cout<< "the value of c is "<<setw(4)<< c<< endl;


// OPERATOR PRECEDENCE  [cppreference.com]
    int a = 4, b = 5;
    int c = ((((a*5)+b)-45)+87);
    cout<< c;

    return 0;
}