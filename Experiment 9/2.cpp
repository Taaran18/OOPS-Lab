#include <iostream>
using namespace std;
class count
{
    int value;

public:
    count()
    {
        value = 5;
    }
    void operator++()
    {
        ++value;
    }
    void operator++(int)
    {
        value++;
    }
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    count c1;
    c1++;
    c1.display();
    ++c1;
    c1.display();
    return 0;
}