#include <iostream>

using namespace std;

int main()
{
    /*LOOPS IN C++
    There are three types of loop in C++
    1. For Loop
    2. While Loop
    3. do-while Loop
    */

    /*For Loop In C++*/
    // Syntax of for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }
    for(int i = 0; i<4; i++)
    {
        cout<<i+1<<endl;
    }
    // Infinite for loop can be made

    


    /*While Loop In C++*/
    // Syntax
    // while (/* condition */)
    // {
    //     /* code */
    // }
    int i = 1;
    while (i <= 40)
    {
        cout<< i<< endl;
        i++;
    }
    // Infinite while loop can be made



    /*do-while Loop In C++*/
    /*
    do{
        code to run
    }while(condition);
    */
    int a = 1;
    do
    {
        cout<<"We are inside a do while loop so 1 will be printed  "<<a<<endl;
    } while ( a != 1);
    
    return 0;
}