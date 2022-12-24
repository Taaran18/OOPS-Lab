#include <iostream>
using namespace std;
class temp
{
private:
    int a;
    char name;

public:
    void get()
    {
        cout << "Enter a number: ";
        cin >> a;
        cout << "Enter a character: ";
        cin >> name;
    }
    void print()
    {
        cout << "Number: " << a << endl;
        cout << "Character: " << name << endl;
    }
};

int main()
{
    int i, z;
    cout << "Enter the number of entries: ";
    cin >> z;
    temp *n = new temp[z];
    for (i = 0; i < z; i++)
    {
        n[i].get();
    }
    cout << "The values are " << endl;
    for (i = 0; i < z; i++)
    {
        n[i].print();
    }
    delete[] n;
    return 0;
}