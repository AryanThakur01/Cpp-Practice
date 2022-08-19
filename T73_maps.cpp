#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Rohan"] = 77;
    marksMap["Jack"] = 83;
    marksMap.insert({{"Kozume", 156}, {"Kuroo", 167.5}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << "\t\t" << (*iter).second << "\n";
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    return 0;
}