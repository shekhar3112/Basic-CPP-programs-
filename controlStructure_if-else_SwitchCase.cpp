#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age " << endl;
    cin >> age;

    // if (age<18){
    //     cout<<"NOT ELIGIBLE"<<endl;
    //     }
    //     else if(age >= 18 && age <=45){
    //         cout<<"ELIGIBLE"<<endl;
    //     }
    //     else {
    //         cout<<"WELCOME"<<endl;
    //     }
    switch (age)
    {
    case 18:
        cout << "ELIGIBLE" << endl;
        break;
    case 15:
        cout << "NOT ELIGIBLE" << endl;
        break;
    default:
        cout << "WELCOME" << endl;
        break;
    }
    return 0;
}