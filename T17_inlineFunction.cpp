// INLINE FUNCTIONS, DEFAULT ARGUMENTS, AND CONSTANT ARGUMENTS

#include <iostream>

using namespace std;

// inline actually replaces the function at the position where it is called with all the work of the the function.
/*
Inline function must not be used in following cases
        static variables
                    static int c = 0;   //This executes only ones
                    c   = c+1;          //Next time this function is run , the value of c will be retained
                    cout<<c<<endl;
*/
inline int product(int a, int b)
{
    return a * b;
}

int moneyReceived(int currentMoney, float factor = 1.04) // like this default values can be passed. 
// REMEMBER TO WRITE ALL THE DEFAULT PARAMETERS IN THE EXTREME RIGHT
{
    return currentMoney * factor;
}

/*
int strLen(const char *p)
{
}
*/
int main()
{
    int a, b;
    cout << "The value of a and b" << endl;
    cin >> a >> b;

    // cout << "The product of a and b is" << product(a, b) << endl;
    // cout << "The product of a and b is" << product(a, b) << endl;
    // cout << "The product of a and b is" << product(a, b) << endl;
    // cout << "The product of a and b is" << product(a, b) << endl;

    int money = 1000000;
    cout << "If you have " << money << " In your bank account, you will recieve " << moneyReceived(money) << " Rs after 1 year " << endl;
    cout << "For VIP: If you have " << money << " In your bank account, you will recieve " << moneyReceived(money, 1.1) << " Rs after 1 year " << endl;

    

    return 0;

}