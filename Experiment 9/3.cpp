#include <iostream>
using namespace std;
class ABC
{
public:
    int a;
    ABC operator-(ABC &ob)
    {
        ABC temp;
        temp.a = a + ob.a;
        return temp;
    }
};

int main()
{
    ABC ob1, ob2, ob3;
    ob1.a = 10;
    ob2.a = 20;
    ob3 = ob1 - ob2;
    cout << ob3.a;
    return 0;
}