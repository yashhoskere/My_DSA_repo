#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int smallest = 0;
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  
    int N = 10;
    int a[N];

    for (int i = 0; i <= N; i++)
    {
        a[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {

            a[arr[i]] = arr[i];
        }
    }

    for (int i = 0; i <= N; i++)
    {
        if (a[i] == -1)
        {
            smallest = i;
            break;
        }
    }
    cout << smallest;
    return 0;
}





