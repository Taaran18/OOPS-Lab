#include <iostream>
using namespace std;
class abc
{
private:
    int a, b;

public:
    void show()
    {
        cout << "Enter the value of a and b: " << a << " " << b << endl;
    }

    abc()
    {
        a = 100;
        b = 240;
    }

    abc(int x, int y)
    {
        a = x;
        b = y;
    }

    abc(abc &p1)
    {
        a = p1.a;
        b = p1.b;
    }

    ~abc()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    abc p1;
    abc p2(10, 20);
    abc p3(p2);
    p1.show();
    p2.show();
    p3.show();
    return 0;
}