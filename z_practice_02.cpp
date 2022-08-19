#include <iostream>
#include<math.h>

using namespace std;

class Y;
class X
{
    int x1, x2;
public:
    X(int a1, int a2){
        x1 = a1;
        x2 = a2;
    };
    friend void distance(X,Y);
};

class Y
{
    int y1, y2;
public:
    Y(int b1, int b2){
        y1 = b1;
        y2 = b2;
    };
    friend void distance(X,Y);
};

void distance(X x,Y y){
    cout << "The distance between the points ("<<x.x1<<", "<<y.y1<<") and ("<<x.x2<<", "<<y.y2<<") is: ";
    cout << sqrt((x.x2-x.x1)*(x.x2-x.x1) + (y.y2-y.y1)*(y.y2-y.y1));
}

int main()
{
    X xCoordinates(4,0);
    Y yCoordinates(0,3);

    distance(xCoordinates, yCoordinates);


    return 0;
}

// isekai cheat magicians 10