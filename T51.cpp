#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    c1.setData(1, 2);
    c1.getData();
    printf("\n");

    (*ptr).setData(42, 22);
    (*ptr).getData();
    printf("\n");

    ptr->setData(122, 122);
    ptr->getData();
    printf("\n");

    // Array of Objects
    complex *ptr1 = new complex[3];
    ptr1->setData(1555, 5553);
    ptr1->getData();
    printf("\n");
    (ptr1 + 1)->setData(124321, 141551);
    (ptr1 + 1)->getData();
    printf("\n");
    (ptr1 + 2)->setData(0, 0);
    (ptr1 + 2)->getData();

    return 0;
}