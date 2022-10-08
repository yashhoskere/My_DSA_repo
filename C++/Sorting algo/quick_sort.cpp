#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r)
{
    int i = l - 1;
    int j = l;
    int pivot = arr[r];
    while (j < r)
    {
        if (arr[j] < pivot)
        {
            swap(arr, ++i, j++);
            
        }
        else
        {
            j++;
        }
    }
    swap(arr, ++i, r);
    return i;
}

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, r);
    }
}

int main()
{
    int n;
    int arr[5] = {8, 4, 3, 0, 1};
    quicksort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}