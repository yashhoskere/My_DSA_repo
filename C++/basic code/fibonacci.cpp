#include <iostream>
using namespace std;

/// Using for loop

int main()
{
    int a = 0, b = 1, n, nextnum;
    cout << "Enter the number";
    cin >> n;

    if (n == 1)
    {
        cout << "0";
        return 0;
    }
    if (n == 2)
    {
        cout << "0" << endl
             << "1" << endl;
        return 0;
    }
    cout << "0" << endl
         << "1" << endl;
    for (int i = 0; i < n - 2; i++)
    {
        nextnum = a + b;
        cout << nextnum << endl;
        a = b;
        b = nextnum;
    }
}