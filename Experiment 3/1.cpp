#include <iostream>
using namespace std;
void swapv(int, int);
void swapa(int *, int *);
void swapr(int &, int &);
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "x = " << x << " y = " << y << endl;

    swapv(x, y);
    cout << "After swapping by value: " << endl;
    cout << "x = " << x << " y = " << y << endl;

    swapa(&x, &y);
    cout << "After swapping by address: " << endl;
    cout << "x = " << x << " y = " << y << endl;
    
    swapr(x, y);
    cout << "After swapping by reference: " << endl;
    cout << "x = " << x << " y = " << y << endl;
    return 0;
}

void swapv(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapa(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapr(int &m, int &n)
{
    int temp;
    temp = m;
    m = n;
    n = temp;
}
