#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int m, n, t;
    cout << "Enter the number" << endl;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }



//// now print the input.
    return 0;
}