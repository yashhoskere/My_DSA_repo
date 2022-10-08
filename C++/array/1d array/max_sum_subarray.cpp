#include <iostream>
#include <string>
#include <vector>
using namespace std;
/// Here we are supposed to get all the possible subarray.

int main()
{
    int current = 0, max = 0, n;
    int a;
    int b;
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
            for (int k = i; k <= j; k++)
            {
                current += arr[k];
            }
                
            if (current > max)
            {
                a=i;
                b=j;
                max = current;
            }
            current = 0;
        }
    }
    cout << max<<" with i and j as"<<a<<" "<<b;;
    return 0;
}