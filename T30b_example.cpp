#include <iostream>

using namespace std;

class Point
{
    int x, y;
public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
    }

};
// Create a function which takes 2 points and computes the distance between those points

int main()
{
    Point p(1,1);
    p.displayPoint();

    Point q(4,5);
    p.displayPoint();

    return 0;
}