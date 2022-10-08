#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int a, b, c, m, n;
    cout << "Enter the number for 1 , 2 matrix" << endl;
    cin >> n >> m >> a;
    int arr1[n][m];
    int arr2[m][a];
    int arr3[n][a];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < a; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < m; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}