#include <iostream>

using namespace std;

int main()
{
    // Array Example
    int marks[] = {12, 14, 13, 15};
    cout << "These are Marks: " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathMarks[4];
    mathMarks[0] = 10;
    mathMarks[1] = 9;
    mathMarks[2] = 7;
    mathMarks[3] = 6;
    cout << "These are math marks: " << endl;
    mathMarks[2] = 10;  //You can change the value of an array
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // these values can be printed using loops
    cout << "Printing using loops" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }
    


    // POINTERS AND ARRAYS
    int* p = marks;
    cout << *(p++) << endl;   //print p and the increment 
    cout << *(++p) << endl;
    // cout << "The value of marks[0] is: " << *p << endl;
    // cout << "The value of marks[1] is: " << *(p +1) << endl;
    // cout << "The value of marks[2] is: " << *(p+2) << endl;
    // cout << "The value of marks[3] is: " << *(p+3) << endl;

    return 0;
}