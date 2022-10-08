#include <iostream>
#include <string>
#include <vector>
using namespace std;

int selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int f = arr[i];
        int k;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < f)
            {
                f = arr[j];
                k = j;
            }
        }
        if (f != arr[i])
        {
            arr[k] = arr[i];
            arr[i] = f;
        }
    }
      for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int a, b, n;
    cout << "Enter the number";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);
    return 0;
}