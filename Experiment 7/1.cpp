#include <iostream>
using namespace std;
class emp
{
public:
    static int count;
    int empid;
    string name;
    emp()
    {
        count = count + 1;
    }

    void set()
    {
        cout << "Enter ID and Name - ";
        cin >> empid >> name;
    }

    void display()
    {
        cout << "ID - " << empid << " Name - " << name << endl;
        cout << "Total emp are - " << count;
    }
};

int emp :: count = 0;
int main()
{
    char ch;
    emp *e;
    while (1)
    {
        cout << "Do you want to add employee? (y/n) - ";
        cin >> ch;
        if (ch == 'y')
        {
            e = new emp;
            e->set();
            e->display();
        }
        else
        {
            break;
        }
    }
}
