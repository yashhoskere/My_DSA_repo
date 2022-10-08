#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (e - s >= 0) // Here we are just checkng that the size of the target array still has one element.
    {
        int mid = (e + s) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
        {
            s = mid + 1; // just changing the start index 
        }
        else
        {
            e = mid - 1; // just changing the last index.
        }
    } return -1;
}

int main()
{
    int n,key;
    cout << "Enter the size of the array and elements of the array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    n = n-1;
    cout<<"Enter the key to be searched"<<endl;
    cin>>key;

    cout << binary_search(arr, n, key);
    return 0;
}