#include <iostream>
#include <string>
#include <vector>
using namespace std;
/// Here we are supposed to get all the possible subarray.

int main()
{
    int current, b, n;
    cout << "Enter the number";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}