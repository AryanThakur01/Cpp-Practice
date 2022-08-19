#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Objects (Functor): Function wrapped in a class so that it is available like an object
    int arr[] = {1, 2, 4, 3, 76, 5, 6, 5, 7, 8, 9};
    // sort(arr, arr + 5);                  //Ascending order sort
    sort(arr, arr + 7, greater<int>());     // Desscending order sort
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}