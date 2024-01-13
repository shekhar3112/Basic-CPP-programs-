#include<iostream>

using namespace std;

//Call By Reference using pointers 

void swapPointer(int* a, int* b){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}
int main(){
    int x = 4, y = 5; 
    cout<<"The value of x is "<<x<<"\nand the value of y is "<<y<<endl; 
    swapPointer(&x, &y); 
    cout<<"The value of x is "<<x<<"\nand the value of y is "<<y<<endl;
    return 0;
}