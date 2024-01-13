// #include <iostream>

// using namespace std;
// // 1st way
struct employee
{
    int eId;
    char favChar;
    float salary;
};

// // 2nd way
// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep;

// int main()
// {
//     // struct employee Ipsita;
//     // Ipsita.eId = 2268;
//     // Ipsita.favChar = 'I';
//     // Ipsita.salary = 100000000;
//     // cout << " The value is " << Ipsita.eId << endl;
//     // cout << " The value is " << Ipsita.favChar << endl;
//     // cout << " The value is " << Ipsita.salary << endl;

//     ep Ipsita;
//     // ep Shekhar;
//     Ipsita.eId = 2268;
//     Ipsita.favChar = 'I';
//     Ipsita.salary = 100000000;
//     cout << " The value is " << Ipsita.eId << endl;
//     cout << " The value is " << Ipsita.favChar << endl;
//     cout << " The value is " << Ipsita.salary << endl;
//     return 0;
// }

#include<iostream>

using namespace std;

// union money
// //memory optimization can be possible by union keyword in c++ --> at one time you can use only one variable 
// {
//     /* data */
//     int rice; 
//     char car; 
//     float pound; 
//};

int main(){
    enum Meal { breakfast, lunch, dinner}; 
    // cout<< breakfast <<endl; 
    // cout<< lunch <<endl; 
    // cout<< dinner <<endl;
    Meal m1 = breakfast;
    cout<<m1<<endl; 
    Meal m2 = lunch; 
    cout<<m2<<endl;  
    // union money m1;
    // m1.rice = 45; 
    // //******special case --> m1 overrides another m1
    // m1.car = 'c'; 
    // cout<<m1.car; 
    
    return 0;
}