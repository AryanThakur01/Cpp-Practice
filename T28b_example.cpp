#include <iostream>

using namespace std;

class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(34);
    oc2.inData(67);

    cout << "The value of c1 before exchanging becomes: ";
    oc1.display();
    cout << "The value of c2 before exchanging becomes: ";
    oc2.display();
    cout<<endl;

    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes: ";
    oc1.display();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}