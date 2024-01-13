#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //********************constants******************
    // const int a = 56;
    // int a = 56;
    // cout<<a<<endl;
    // a = 45;
    // cout<<a<<endl;
    //*******************manipulators****************
    int a = 34, b = 78, c = 7890;
    cout << "without setw :" << a << endl;
    cout << "without setw :" << b << endl;
    cout << "without setw :" << c << endl;

    cout << "with setw :" << setw(4) << a << endl;
    cout << "with setw :" << setw(4) << b << endl;
    cout << "with setw :" << setw(4) << c << endl;
    return 0;
}