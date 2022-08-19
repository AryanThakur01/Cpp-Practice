// cpp reference for header files: can be searched on google and used for cpp reference 
// cppreference.com
// ALSO LOOK FOR NOT TO USE DEPRECATED VALUES


/*
THERE are two types of header files:
1. System header files: this comes with the compiler
*/
#include <iostream>

/*
2. User defined header files: It is written by the programmer
*/
// #include "T6this.h"  //THIS WILL PRODUCE AN ERROR IF T6this.h is not present in the current directory

using namespace std;

int main()
{
    cout<< "OPEREATOERS IN C++"<<endl;  //endl can be used to jump to new line

    // ARITHMETIC OPERERATORS
    int a = 4, b =5;
    cout<< "'+' the value of a + b: "<< a+b<< endl;
    cout<< "'-' the value of a - b: "<< a-b<< endl;
    cout<< "'*' the value of a * b: "<< a*b<< endl;
    cout<< "'/' the value of a / b: "<< a/b<< endl;     //THE VALUE COMES OUT TO BE 0 BECAUSE THE SOLUTION COMES OUT TO BE 0.8 BUT C++ WILL GIVE OUTPUT JUST THE SAME AS THAT OF INPUT DATATYPE
    cout<< "'%' the value of a % b: "<< a%b<< endl;

    cout<< "'++' the value of a++: "<< a++<< endl;      //PRINT AND THEN INCREMENT
    cout<< "     the value of ++a: "<< ++b<< endl;      //INCREMENT AND THEN PRINT

    cout<< "'--' the value of a--: "<< a--<< endl;      //PRINT AND THEN DECREMENT
    cout<< "     the value of --a: "<< --b<< endl << endl;      //DECREMENT AND THEN PRINT


    // ASSIGNMENT OPERATOR
    // int a = 3, b =11;
    // char d = 'd';


    // COMPARISON OPERATOR
    cout<<"The value of a == b: "<< (a == b)<< endl;
    cout<<"The value of a != b: "<< (a != b)<< endl;
    cout<<"The value of a <= b: "<< (a <= b)<< endl;
    cout<<"The value of a >= b: "<< (a >= b)<< endl;
    cout<<"The value of a > b:  "<< (a > b)<< endl;
    cout<<"The value of a < b:  "<< (a < b)<< endl<< endl;


    // LOGICAL OPERATORS
    cout<< "Following are the logical operator in C++"<< endl;
    cout<< "The value of this logical and operator (a == b) && (a > b) is: "<< ((a == b) && (a > b)) <<endl;
    cout<< "The value of this logical and operator (a == b) || (a < b) is: "<< ((a == b) || (a < b))<<endl;
    cout<< "The value of this logical and operator !(a == b) is: "<< !(a == b)<<endl;


    return 0 ;
}
