#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
    {
        cout << a << " " << (b - a) / 2;
    }
    else
    {
        cout << b << " " << (a - b) / 2;
    }
}