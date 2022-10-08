#include <iostream>
using namespace std;
int DTB(int x)
{
    if (x >= 1 && x <= 9)
    {
        cout << x;
        return 1;
    }
    int y = x % 16;
    x = x / 16;
    DTB(x);
    if (y >= 10 && y <= 15)
    {
        char r = 'A'+y-10;
        cout<<r;
    }
    else
    {
        cout << y;
    }
}
int main()
{
    int a, b;
    cin >> a;
    DTB(a);
}
