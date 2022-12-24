#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int i;
    string name;
    cout << "Enter your name - ";
    cin >> name;
    fstream file;
    file.open("c.bin", ios::out | ios::binary);
    if (file.is_open())
    {
        for (i = 0; i < name.size(); i++)
        {
            file.put(name[i]);
        }
    }
    else
    {
        cout << "File not opened";
    }
    file.close();
    return 0;
}