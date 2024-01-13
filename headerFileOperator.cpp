#include<iostream>
/*
    There are two types of header files: 
    1. System header files: comes with the compiler
        e.g: #include<iostream>
    2. User defined header files: written by the user
        e.g: #include "header_file_name.h"
*/
using namespace std;

int main(){
    // Arithmatic operator 
    // +, -, *, /, %, ++, --;

    //Assignment operator 
    // --> Used to assign values to variables

    //Comparison Operator
    int a = 3; int b = 5; 

    cout<<(a==b)<<endl; 
    cout<<(a!=b)<<endl; 
    cout<<(a<=b)<<endl; 
    cout<<(a>=b)<<endl; 
    cout<<(a<b)<<endl; 
    cout<<(a>b)<<endl; 
         
    return 0; 
}