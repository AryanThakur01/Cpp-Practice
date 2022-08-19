#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to get the table of: ";
    cin>>n;

    for (int i = 1; i < 11; i++)
    {
        cout<<n<<" X "<<setw(2)<<i<<" = "<<setw(3)<<n*i<<endl;
    }
    
    
    return 0;
}