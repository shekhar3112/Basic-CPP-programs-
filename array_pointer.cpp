#include <iostream>

using namespace std;

int main()
{
    // 1st way
    // int marks[5] = {54, 43, 87, 99, 23};
    // cout << marks[2] << endl;
    //  2nd way
    int age[5];
    age[2] = 45;
    age[3] = 34;
    age[4] = 78;
    age[5] = 32;
    // cout << age[4] << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "The value of age " << i << " is " << age[i] << endl;
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }
    int i = 0;

    // while (i <= 5)
    // {
    //     cout << " The value of age " << i << " is " << age[i] << endl;
    //     i++;
    // }

    // do
    // {
    //     cout << " The value of age " << i << " is " << age[i] << endl;
    //     i++;
    // } while (i < 5);
    // int* p = age;
    // cout<<"The value of age[i] "<< *(p+5)<<endl;
    // cout<<"The value of age[i] "<< *(p+4)<<endl;
    // cout<<"The value of age[i] "<< *(p+2)<<endl;
    // cout<<"The value of age[i] "<< *(p+3)<<endl;
    return 0;
}