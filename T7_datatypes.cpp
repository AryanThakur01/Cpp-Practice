#include <iostream>

int c = 45;

using namespace std;
int main()
{
    // *******************BUILT IN DATA TYPES**************
/*
    int a, b, c;

    cout<< "Enter the value of a: "<< endl;
    cin>> a;

    cout<< "Enter the value of b: "<< endl;
    cin>> b;

    c = a + b;
    cout<<"The sum is: "<< c<< endl;

    cout<<"The global value of c is "<< ::c<< endl<< endl;
*/






    // *******************FLOAT, DOUBLE AND LONG DOUBLE LITERALS**************

/*
    float d = 34.4f;
    long double e = 34.4l;

    // here 34.4 is DOUBLE because decimal(.) represents double 
    // here 34.4f represents FLOAT  we can also use 'F' in place of 'f'
    // here 34.4f represents LONG DOUBLE  we can also use 'D' in place of 'd'

    cout<< "The size of 34.4 is "<< sizeof(34.4)<< endl;
    cout<< "The size of 34.4f is "<< sizeof(34.4f)<< endl;
    cout<< "The size of 34.4F is "<< sizeof(34.4F)<< endl;
    cout<< "The size of 34.4l is "<< sizeof(34.4l)<< endl;
    cout<< "The size of 34.4L is "<< sizeof(34.4L)<< endl;

    cout<< "The value of d is "<< d<< endl;
    cout<< "The value of e is "<< e<< endl;
*/






    // *******************REFERENCE VARIABLES**************
    // rohan -----> monty ---> rohu  ---->  Dangerous coder
/*
    float x =455;
    float &y = x;
    cout<< x<< endl;
    cout<< y<< endl;
*/





    // *******************TYPECASTING**************
    int a = 45;
    float b = 45.46;
    cout<< "the value of a is  "<< (float)a<<endl;
    cout<< "the value of a is  "<< float(a)<<endl;

    
    cout<< "the value of a is  "<< (int)b<<endl;
    cout<< "the value of a is  "<< int(b)<<endl;

    int c = int(b);

    cout<< "The expression is "<< a + b<< endl;
    cout<< "The expression is "<< a + int(b)<< endl;
    cout<< "The expression is "<< a + (int)b<< endl;


    return 0;
}
