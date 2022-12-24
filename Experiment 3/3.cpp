#include <iostream>
using namespace std;
class A
{
private:
    int num1;

public:
    int num2;
    void setdata(int p, int q)
    {
        num1 = p;
        num2 = q;
    }
    void display()
    {
        cout << "num1 = " << num1 << " num2 = " << num2 << endl;
    }
};

int main()
{
    A obj;
    obj.setdata(10, 20);
    obj.display();
    obj.num2 = 30;
    obj.display();
    return 0;
}