#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    // Below line means that non member sumComplex functins is allowed to do anything with my private members
    friend complex sumComplex(complex o1, complex o2); // This does not makes this the member function of complex
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

// PROPERTIES OF FRIEND FUNCTIONS 
/*
1. Not in the scope of the class
2. Since it is not in the scope of the class, it cannot be called from the object of the class c1.sumComplex == invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be decalred inside public or private section of the class
6. It cannot access the members directly by their names and need ocject_name.member_name to access any member.
*/