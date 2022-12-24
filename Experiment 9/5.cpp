#include <iostream>
#include <stdexcept>
using namespace std;
float Division(float num, float den)
{
    if (den == 0)
    {
        throw runtime_error("\nDivision by zero");
    }
    return num / den;
}

int main()
{
    float num, den, result;
    cout << "Enter a numerator: ";
    cin >> num;
    cout << "Enter a denominator: ";
    cin >> den;
    try
    {
        result = Division(num, den);
        cout << "The Quotient is: " << result;
    }
    catch (runtime_error &m)
    {
        cout << "Exception occurred" << m.what();
    }
    return 0;
}