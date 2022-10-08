#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number" << endl;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;

    // Spiral printing
    while (row_start <= row_end && column_start <= column_end)
    {
        // tracing upper row
        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // tracing right column
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][column_end] << " ";
        }
        column_end--;

        //tracing bottom row
        for (int col = column_end; col >= column_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // tracing left column
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }
        column_start++;

        return 0;
    }
}