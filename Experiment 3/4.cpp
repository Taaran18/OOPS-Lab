#include <iostream>
using namespace std;
class A
{
private:
    int num1;

public:
    A()
    {
        num1 = 10;
    }
    A(int p)
    {
        num1 = p;
    }
    void display()
    {
        cout << "num1=" << num1 << endl;
    }
};

int main()
{
    A obj1;
    A obj2(20);
    obj1.display();
    obj2.display();
    return 0;
}