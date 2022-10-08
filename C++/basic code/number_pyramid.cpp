#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cout << "enter the number" << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = n + 1 - i; j >= 1; j--)
        {
            cout << j;
        }
        for (int j = 2; j <= n + 1 - i; j++)
        {
            cout << j;
        }

        cout << endl;
    }
    return 0;
}