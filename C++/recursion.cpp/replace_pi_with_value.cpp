#include <iostream>
#include <string>
#include <vector>
using namespace std;

void x(string a, int n)
{
    if (n <= 0)
    {
        exit(0);
    }
    if (a[0] == 'p')
    {
        if (a[1] == 'i')
        {
            cout << " 3.14 ";
            x(a.substr(2), n - 2);
        }
        else
        {
            cout << 'p';
            x(a.substr(1), n - 1);
        }
    }
    if(a[0] == 'i'){
        cout<<'i';
        x(a.substr(1),n-1);
    }
}

int main()
{
    string a;
    cout << "Enter the string" << endl;
    cin >> a;
    x(a, a.length());
    return 0;
}