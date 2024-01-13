#include <iostream>

using namespace std;

int sum(int x, int y); // Function Definition

int main()
{
    int num1, num2;
    cout << "Enter num1" << endl;
    cin >> num1;
    cout << "Enter num2" << endl;
    cin >> num2;
    cout << "Sum is " << sum(num1, num2); // Function Calling
    return 0;
}

int sum(int x, int y)
{
    int z = x + y;
    return z;
}
