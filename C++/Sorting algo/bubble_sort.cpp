#include <iostream>
#include <string>
#include <vector>
using namespace std;

int bubble_sort(int arr[], int n)
{int a;
    int ex = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++){
            if(arr[j]>arr[j+1]){
                a = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =a;
                ex++ ;
            }
        }
        if(ex == 0){
            cout<< -1;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
   bubble_sort(arr, n);
    return 0;
}