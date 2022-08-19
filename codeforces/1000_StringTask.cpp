/*
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "E", "I", "O", "U", "Y", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.
Output
Print the resulting string. It is guaranteed that this string is not empty.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;
    cout<<s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s.at(i)) && islower(s.at(i)))
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s.at(j) == 'A' || s.at(j) == 'E' || s.at(j) == 'I' || s.at(j) == 'O' || s.at(j) == 'U' || s.at(j) == 'Y')
                {
                    s.erase(j);
                }
            }
        }
    }
    
    return 0;
}