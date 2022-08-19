#include <iostream>
using namespace std;
/*
class templates with multiple parameters(one, two, three, four ,.....)
template <class T1, class T2,......(coma seperated)>
class nameOfClass{
    //body
}
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main()
{
    myClass<int, float> obj(1, 1.35);
    obj.display();
    return 0;
}