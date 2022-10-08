#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int arithmeticsum(int arr[], int n)
{
    int j = 1, max = 2, count = 2;
    int pd = arr[0] - arr[1];
    while (j < n - 1)
    {
        if (pd == arr[j]-arr[j + 1])
        {
            cout<<'1';
            if (++count > max)
            {
                cout<<'2'<<endl;
                max = count;
                
            }
        }
        else{
            count = 2;
        }
        pd = arr[j] - arr[j + 1];
        cout<<pd<<endl;
        j++;
    }

    cout << max;
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    arithmeticsum(arr, n);
    return 0;
}