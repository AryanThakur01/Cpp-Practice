#include <iostream>

using namespace std;

typedef struct Employee
{
    int empId;
    char favChar;
    float salary;
} ep;

union money
{
    int rice;     // 5 bytes
    int car;      // 4 bytes
    float pounds; // 4 bytes
};
// Because we are using union this means that we are allocating just 5 bytes
// But the problem with this is that we kcan use only one at a time to store and retrieve

int main()
{
    ep harry; // use of typedef
    // struct Employee harry;
    struct Employee shubham;
    struct Employee rohandas;
    harry.empId = 1;
    harry.favChar = 'h';
    harry.salary = 12000000;
    cout << "The Id of employee harry is " << harry.empId << endl;
    cout << "The favChar of employee harry is " << harry.favChar << endl;
    cout << "The salary of employee harry is " << harry.salary << endl;

    union money m1;
    m1.rice = 123;
    m1.pounds = 123.31;
    cout << m1.rice << endl; // This will give a garbage value as output because we have stored pounds in union which will take the storage of union
    cout << m1.pounds << endl;

    enum Meal           //This makes meal a datatype
    {
        breakfast,
        lunch,
        dinner
    };                  //giving integer values to
    Meal lun = lunch;
    cout << lun << endl;
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    return 0;
}