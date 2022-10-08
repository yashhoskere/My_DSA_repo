#include <iostream>
using namespace std;

int main()
{
    int n, max;
    int record_breaking = 1;
    cout << "Enter the number";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];
    for (int j = 1; j < n - 1; j++)
    {
        if ((arr[j] > max)&&(arr[j] > arr[j + 1]))
        {
            max = arr[j];
            record_breaking++;
        }
        else
        {
            if (j = n - 1 && (arr[j] > max))
            {

                record_breaking++;
            }
        }
    }
    cout << record_breaking << endl;

    return 0;
}