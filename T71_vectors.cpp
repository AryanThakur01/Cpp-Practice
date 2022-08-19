// You can find vector functions online for indepth knowledge
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << "\t";
        cout << v.at(i) << "\t";
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector
    vector<int> vec1; // zero length vector

    int element, size = 5;
    // cout << "Enter the size of the vector you need to create: ";
    // cin >> size;
    // for (size_t i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter+3, 40, 566);
    // display(vec1);

    // display(vec1);
    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('5');
    display(vec2);
    vector<double> vec3(4); // 4-element double vector from vec2
    display(vec3);
    vector<int> vec4(4, 13); // 6-element vector of 3s
    display(vec4);

    return 0;
}