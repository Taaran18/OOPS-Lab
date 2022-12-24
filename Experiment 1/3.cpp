#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    int average;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum = a + b;
    cout << "Sum is: " << sum;
    average = sum / 2;
    cout << "Average is: " << average;
    return 0;
}