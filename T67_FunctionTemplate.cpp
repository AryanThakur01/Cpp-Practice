#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage(2, 5);
    cout<<"The average of these numbers is: "<<a<<endl;

    float b;
    b = funcAverage(2, 5.4);
    cout<<"The average of these numbers is: "<<b<<endl;

    int x = 122, y = 33;
    swapp(x, y);
    cout<<x<<endl<<y;


    return 0;
}