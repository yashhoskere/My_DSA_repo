#include <iostream>
#include<stdio.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int a, b, n;
    cout << "Enter the number" << endl;
    cin >> n;
    int arr[n];
    int current = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 2*n -1; i++)
    {
        
        current < 0 ? current =0 : current;
        current += arr[i%n];
        current > max ? max = current : max;
    }
    cout << max;

    return 0;
}