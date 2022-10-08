#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cout << "Enter the numbers";
    cin >> n;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
            cout << " ";

        for (int j = 1; j <= 5; j++)
            cout << "*"<<" ";

        cout << endl;
    }
    return 0;
}