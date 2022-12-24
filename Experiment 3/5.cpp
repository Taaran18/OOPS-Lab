#include <iostream>
using namespace std;
class Person
{
private:
    int a, b;

public:
    void value();
    void value(int a, int b);
};

void Person::value()
{
    this->a = 10;
    this->b = 20;
    cout << "Default Arrangement: " << a << " " << b << endl;
}

void Person::value(int a, int b)
{
    this->a = a;
    this->b = b;
    cout << "Parameterized Arrangement: " << a << " " << b << endl;
}

int main()
{
    Person obj;
    obj.value();
    obj.value(30, 40);
    return 0;
}