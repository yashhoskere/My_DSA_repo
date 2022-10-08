#include <iostream>
using namespace std;


int fact(long long);
int main()
{
    long long n;
    cout << "Enter the number";
    cin>>n;
    cout<<fact(n);
    return 0;
}

int fact(long long n)
{
    if (n == 1 || n == 0)
        return 1;

    return n*fact(n-1);
}