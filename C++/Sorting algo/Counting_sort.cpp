#include <iostream>
#include <string>
#include <vector>
using namespace std;

void insertionsort(int arr[], int count[], int max, int n)
{
    for(int i =0; i<n;i++){
        int p = arr[i];
        count[p] += 1 ; 
    }

    int c=0;
    for(int i = 0; i<max ; i++){
        int p = count[i];
        for(int j = 0; j<p;j++){
            arr[c] = i;
            c++;
        }

    }
}

int main()
{
    int a, b, n;
    cout << "Enter the number" << endl;
    cin >> n;
    int max = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    max++;
    int count[max] ={0};
    insertionsort(arr, count, max, n);

     for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
        
    }
    cout<<endl;
     for (int i = 0; i < max+1; i++)
    {
        cout<< count[i];
        
    }

    return 0;
}