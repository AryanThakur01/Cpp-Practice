#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("T60_sample.txt");
    out << "This is me\n";
    out << "This is also me\n";
    out << "This is also alsi me\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("T60_sample.txt");
    // in >> st>>st2;
    // cout << st<<st2;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    in.close();
    
    return 0;
}