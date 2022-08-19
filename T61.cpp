#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with hout stream
    ofstream hout("T60_sample.txt");

    // Creating a name string and filling it with the string entered by the user
    cout << "Enter your name: ";
    string name;
    cin >> name;

    // Writing a string to the file
    hout << "My name is " + name;
    hout.close();

    ifstream hin("T60_sample.txt");
    string content;
    getline(hin,content);
    cout<<"The content of this file is: "<<content;
    hin.close();

    return 0;
}



/*
ofstream fileVar("filename.txt");
fileVar<<"This content will be send to the file name entered";
ifstream fileVar("filename.txt");
string variable
getline(fileVar, variable)      //This will get the first line of the text file whose name we had entered
fileVar>>variable;      // This will get the first word of the file
*/