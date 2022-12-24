#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i, n, a[50];
    cout << "Enter the number of elements in the array - ";
    cin >> n;
    cout << "Enter the elements of the array - ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    fstream file;
    file.open("a.bin", ios::out | ios::binary);
    if (file.is_open())
    {
        for (i = 0; i < n; i++)
        {
            file.put(a[i]);
        }
    }
    else
    {
        cout << "File not opened";
    }
    file.close();
    return 0;
}