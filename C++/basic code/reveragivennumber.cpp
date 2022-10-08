#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a, b;
    int n = 0;
    cout << "enter the number";
    cin >>a;
    while(a>0)
    {
        b = a%10;
        a=a/10;
        n = n*10 + b;

    }
cout<<n;
    return 0;
}