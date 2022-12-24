#include <iostream>
using namespace std;
class ABC
{
private:
    int a, b;

public:
    void show()
    {
        cout << "a = " << a << " b = " << b << endl;
    }

    ABC()
    {
        a = 10;
        b = 20;
    }

    ABC(int x, int y)
    {
        a = x;
        b = y;
    }

    ABC(int z)
    {
        a = z;
        b = z;
    }
};

int main()
{
    ABC obj1;
    ABC obj2(30, 40);
    ABC obj3(50);
    obj1.show();
    obj2.show();
    obj3.show();
    return 0;
}