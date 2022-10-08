//Here you will be given an array where you will have to find out the first smallest index that repeated itself.
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int a, b, n;
    cout << "Enter the number"<<endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    const int N = exp(6) + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            if (minidx > idx[arr[i]])
            {
                minidx = idx[arr[i]];
            }
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx +1 << endl;
    }
    return 0;
}