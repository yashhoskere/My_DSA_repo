#include <iostream>
#include <string>
#include <vector>
using namespace std;

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << *a << " " << *b << endl;
}

int main()
{
    int a = 10, b = 8;
    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr);

    return 0;
}