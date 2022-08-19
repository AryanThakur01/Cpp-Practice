#include <iostream>

using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 12)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "The values:\n\tdata1: " << data1 << "\n\tdata2: " << data2 << "\n\tdata3: " << data3 << endl;
}

int main()
{
    Simple s(1);
    s.printData();

    return 0;
}