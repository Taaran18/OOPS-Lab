#include <iostream>
using namespace std;
class ADE
{
    int rollno;
    string name;

public:
    void set()
    {
        cout << "Enter the roll number: ";
        cin >> rollno;
        cout << "Enter the name: ";
        cin >> name;
    }
    void display()
    {
        cout << "Roll number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    int x, n;
    cout << "Enter the number of students: ";
    cin >> n;
    ADE *s = new ADE[n];
    for (x = 0; x < n; x++)
    {
        s[x].set();
    }
    cout << "Details of students are: " << endl;
    for (x = 0; x < n; x++)
    {
        (s + x)-> display();
    }
    delete[] s;
    return 0;
}