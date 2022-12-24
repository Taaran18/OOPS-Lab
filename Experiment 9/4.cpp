#include <iostream>
using namespace std;
int main()
{
    try
    {
        int x;
        cout << "Enter a Age: ";
        cin >> x;
        if (x > 60)
        {
            throw out_of_range("Age is greater than 60");
        }
        else
        {
            cout << "Age is less than 60";
        }
    }
    catch (out_of_range &e)
    {
        cout << e.what() << endl;
    }
}