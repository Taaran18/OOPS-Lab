#include <iostream>
using namespace std;
struct student
{
    int roll;
    char name[20];
    int marks;
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student s[10];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the roll number of student " << i + 1 << ": ";
        cin >> s[i].roll;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> s[i].name;
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> s[i].marks;
    }
    cout << "Roll_No.\tName\tMarks\n";
    for (int i = 0; i < n; i++)
    {
        cout << s[i].roll << "\t" << s[i].name << "\t" << s[i].marks;
    }
}
