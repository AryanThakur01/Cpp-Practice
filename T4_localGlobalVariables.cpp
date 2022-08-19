// NOTE THAT THE LOCAL VARIABLE TAKE THE PRECEDENCE IF LOCAL AND GLOBAL VARIBLES HAVE THE SAME NAME

#include <iostream>

using namespace std;

int glo = 9;

void sum(){
    int a;
    cout<< glo <<"\n";
}

int main()
{
    // int a = 4;
    // int b = 53;

    int a = 4, b = 53;
    float pi = 3.14;
    char c = 'A';
    bool is_true = true;

    cout<< is_true << "\n";

    sum();


    // cout<< "THIS IS TUTORIAL 4.\nHere the value of a is " << a << "\nThe value of b is " << b;
    // cout<<"\nThe value of pi is "<< pi;
    // cout<<"\nThe value of c is "<< c;

    int glo = 788;  // local variable will take the precedence
    cout<< glo;
    return 0;
}