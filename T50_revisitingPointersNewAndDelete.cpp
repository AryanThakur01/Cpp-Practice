#include <iostream>
using namespace std;

int main()
{
    // Basic example
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is: " << *(ptr) << endl;

    // new oprerator
    // int *p = new int(40);
    float *p = new float(40.76);
    cout << "The value at address p is: " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 200;
    arr[2] = 3000;
    cout << "the value of arr[0] is: " << arr[0] << endl;
    cout << "the value of arr[1] is: " << arr[1] << endl;
    cout << "the value of arr[2] is: " << arr[2] << endl;

    // delete operator
    delete[] arr;
    return 0;
}