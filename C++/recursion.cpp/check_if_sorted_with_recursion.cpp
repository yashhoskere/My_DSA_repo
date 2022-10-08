#include <iostream>
#include <string>
#include <vector>
using namespace std;

int recurse(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool sorted = recurse(arr + 1, n - 1);
    return (arr[0] < arr[1] && sorted);

    /// The logic here is that everytime i call the recurse function i sent the pointer to the function as that of next element hence i simply check arr[0]<arr[1] && sorted. 
}
int main()
{
    int n = 5, arr[5] = {1, 2, 3, 9, 5};

    cout << recurse(arr, n);
    return 0;
}