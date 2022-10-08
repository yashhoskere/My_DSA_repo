#include <iostream>
#include <string>
#include <vector>
using namespace std;

int prime(int n)
{
/// logic is simple here. You take a number and then mark all the multiples of it. After doing it for all the numbers you are left with will the prime numbers. Also for each number that you are trying you need to go i**2 of it as anything before that will be marked.
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
            cout << i << endl;
    }
}

int main()
{
    int a, b, n;

    cout << "Enter the number" << endl;
    cin >> n;
    prime(n);
    cout<<"Print all the prime factors of number"<<endl;
    
    return 0;
}
