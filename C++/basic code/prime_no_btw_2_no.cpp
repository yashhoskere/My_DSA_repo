#include <iostream>
using namespace std;

int prime(int);
int main()
{
    int a, b, n;
    cout << "Enter the numbers";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        prime(i);
    }
    return 0;
}

int prime(int a)
{
    int b;
    b = a / 2;
    for (int i = 2; i <= b; i++)
    {
        if (a % i == 0)
        {
          return 0;   
        }
    }
    cout <<a<< endl;
}