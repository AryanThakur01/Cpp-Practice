#include<iostream>

using namespace std;

int main()
{
    // SELECTION CONTROL STATEMENT: IF ELSE LADDER

    // cout<< "This is tutorial 9\n";
    // int age;
    // cout<< "Enter your age"<<endl;
    // cin>>age;
    // if (age < 18)
    // {
    //     cout<< "You can not come to the party";
    // }
    // else if (age == 18)
    // {
    //     cout<< "You are a kid and you will get a kid pass to the party"<< endl;
    // }
    // else
    // {
    //     cout<<"You can come to the party"<<endl;
    // }



    // SELECTION CONTROL STATEMENT: SWITCH CASE STATEMENTS 
    int age;
    cin>> age;
    switch (age)
    {
    case 18:
        cout<<"Your age is 18yrs";
        break;
        
    case 17:
        cout<<"Your will be 18 next year";
        break;

    case 19:
        cout<<"Your are already above 18";
        break;
    
    default:
        cout<<"Your age is not on the verge of 18";
        break;
    }



    return 0;
}