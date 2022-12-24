#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r;
    r.breadth = 8;
    r.length = 10;
    cout << "Area of rectangle is: " << r.length * r.breadth;
    return 0;
}