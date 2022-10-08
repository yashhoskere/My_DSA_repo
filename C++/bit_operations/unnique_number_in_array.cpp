/// find a unique number in an array that appears only once and rest all appears twice.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int xorsum = 0, n;
    cout << "Enter the number" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }

    cout<<xorsum;

    return 0;
}

//// the simplest logic that i can think of is that xor will neutralize every pair of common one and at the end you will only be left with the combination of odd ones which will be the number
