#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int a, b, n;
    cout << "Enter the number" << endl;
    cin >> n;
    int arr[n];



    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    
    
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}