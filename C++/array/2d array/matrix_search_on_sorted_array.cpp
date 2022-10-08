#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int target, n, m;
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
    cout << "enter the target";
    cin >> target;
    int a = 0, b = m - 1;
    while (a < n && b >= 0)
    {
        
        if (arr[a][b] == target)
        {
            cout << "true";
            return 0;
        }
        else if (arr[a][b] < target)
            a++;
        else
            b--;
    }
    cout << " not found";
    return 0;
}