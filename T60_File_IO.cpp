#include <iostream>
#include <fstream>          //for the classes that has file functions

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
/*
1. Using the constructor
2. Using the member function open() if the files
*/
using namespace std;


int main()
{
    string st = "Aryan Bhai\nHello";
    string st2;
    // Opening files using constructor
    ofstream out("T60b_sample.txt");
    out<<st;

    // Opening files using constructor and reading to it
    // ifstream in("T60b_sample.txt");
    // // in>>st2;
    // getline(in, st2);
    // cout<<st2<<endl;
    // getline(in, st2);
    // cout<<st2<<endl;
    // getline(in, st2);
    // cout<<st2<<endl;

    return 0;
}