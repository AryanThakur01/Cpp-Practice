// STATIC IN C++
#include <iostream>

using namespace std;

class Employee
{
    static int count; // this is the property of class; scope: inside class, lifetime: as long as program runs
    int id;
    // int count;
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        // cout<<id
    }

    static void getCount(void)      //STATIC FUNCTIONS HAVE ACCESS TO STATIC FUNCTIONS OR VARIABLES ONLY
    {
        cout << "The value of count is " << count << endl;
    }
};
int Employee ::count; // Default value is 0 and this needs to be called according to syntax for making count static; We can provide value to the static variables here only

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.cout = 1;  // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}