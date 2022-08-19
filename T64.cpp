#include <iostream>
using namespace std;

template <class T>
class vector
{
    int size;

public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector <double>v1(3);
    v1.arr[0] = 1.2;
    v1.arr[1] = 2.34;
    v1.arr[2] = 4.243;

    vector <double>v2(3);
    v2.arr[0] = 3.2;
    v2.arr[1] = 2.24;
    v2.arr[2] = 1.1;

    double a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}