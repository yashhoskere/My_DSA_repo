#include <iostream>
#include <string>
#include <vector>
using namespace std;

int insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int k = i;
        for (int j = i - 1; j >= 0; j--)
        {
            int a;
            if (arr[k] < arr[j])
            {
                a = arr[k];
                arr[k] = arr[j];
                arr[j] = a;
                k = j;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
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
    insertionsort(arr, n);
    return 0;
}