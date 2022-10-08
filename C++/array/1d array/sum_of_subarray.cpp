#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
        current = 0;
        for (int j = i; j <n; j++)
        {
            current += arr[j];
            cout << current << endl;
        }
    }

    return 0;
}