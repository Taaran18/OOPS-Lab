#include <iostream>
using namespace std;
class car
{
public:
    int y, model;
    const int x;
    car(int a) : x(a)
    {
    }
    void set(int y)
    {
        model = x + y;
    }
    void disp() const
    {
        cout << "The model you get is - " << model << endl;
    }
};

int main()
{
    car c(5432);
    c.set(32436);
    c.disp();
    return 0;
}
