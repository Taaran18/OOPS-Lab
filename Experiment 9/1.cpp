#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream name;
    name.open("name.doc", ios::out | ios::app);
    if (!name)
    {
        cout << "File not created";
    }
    else
    {
        cout << "File Created" << endl;
        name << "Employee Name - Taaran" << endl;
        name << "Employee ID - 123456" << endl;
        name << "Employee Age - 15" << endl;
        name.close();
    }
    cout << "Reading File." << endl;
    name.open("name.doc", ios::in);
    char ch;
    while (name.eof() == 0)
    {
        name.get(ch);
        cout << ch;
    }
}