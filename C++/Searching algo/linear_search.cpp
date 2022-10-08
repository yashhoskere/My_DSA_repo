#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            return i;
        }
    } return -1;
}

int main()
{
    int n, key;
    cout << "Enter the size of the array"<<endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched"<<endl;
    cin >> key;
    cout<<linear_search(arr, n, key)5;

    return 0;
}