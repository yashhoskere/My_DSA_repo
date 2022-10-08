#include <iostream>
#include <string>
#include <vector>
using namespace std;
// To find a subarray whose sum matches the input key.
int main()
{
    int n, i = 0, j = 0;
    int sum = 0, key;
    cout << "Enter the size and key" << endl;
    cin >> n;
    cin>> key;
    int arr[n];
    for (int p = 0; p < n; p++)
    {
        cin>>arr[p];
    }
    sum = 0;
    while ( j < n)
    {
        sum += arr[j];
        if( sum > key && i==j){
            sum = sum - arr[j];
            i++;
            j++;
        }
        else if (sum < key)
        {
            j++;
            
        }
        else if (sum == key)
        {
            cout << i << " " << j;
            return 1;
        }
        else
        {
            sum-= arr[i];
            i++;
        }
    }
    cout << "-1";

    return 0;
}