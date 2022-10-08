#include <iostream>
#include <string>
#include <vector>
using namespace std;


void mergesort(int arr[], int left , int right)
{
    while()
    int mid = left + ( right-left)/2;
    mergesort(arr,left,mid);
    mergesort(arr, mid+1,right);
    merge(arr,left,mid,right);
    return ;

     if (left < right)
    {
        int mid = ((l + r) / 2);
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void merge(int arr , int left , int mid, int right)
{
    int n1 = mid-left +1;
    int n2 = right - mid;
    int a[n1];
    int b[n2];
    for(int i =0 ; i<n1 ;i++)
        a[i] = arr[left+i];
    
    for(int i =0 ; i<n2 ;i++)
        b[i] = arr[mid+1+i];

    int i=0,j=0,k = left;

    while(i < n1 && j < n2)
    {
        if(a[i] <b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }

    while(i<n1)
    {
        arr[k++] = a[i++];
    }
    while(j<n2)
    {
        arr[k++] = b[j++];
    }

}

int main()
{

    int arr[] = {5, 4, 3, 2, 1};
    mergesort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




// void merge(int arr[], int l, int mid, int r)
// {

//     int n1 = mid - l + 1;
//     int n2 = r - mid;
//     int a[n1];
//     int b[n2]; // temp arrays

//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[l + i];
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }

//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = a[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             k++;
//             j++;
//         }
//     }
//     while (i < n1)
//     {
//         arr[k] = a[i];
//         k++;
//         i++;
//     }
//     while (j < n2)
//     {
//         arr[k] = b[j];
//         k++;
//         j++;
//     }
// }
// void mergesort(int arr[], int l, int r)
// {

//     if (l < r)
//     {
//         int mid = ((l + r) / 2);
//         mergesort(arr, l, mid);
//         mergesort(arr, mid + 1, r);
//         merge(arr, l, mid, r);
//     }
// }