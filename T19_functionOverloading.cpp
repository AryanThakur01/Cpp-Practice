// FUNCTION OVERLOADING: creating multiple functions with different number of arguments
// Also note that this feature is not available in C

#include <iostream>

using namespace std;

int sum(float a, int b)
{
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

// Calculate the volume of a cylinder
int volume(double r, int h)
{
    return 3.14 * r * r * h;
}

// Calculate the volume of cube
int volume(int a)
{
    return a * a * a;
}

// Calculate the volume of cuboid
int volume(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    cout << "The sum of the numbers 4 and 7 is " << sum(4, 7) << endl;
    cout << "The sum of the numbers 4, 9 and 7 is " << sum(4, 9, 7) << endl;

    cout << "The volume of cuboid is " << volume(3, 12, 10) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;

    return 0;
}