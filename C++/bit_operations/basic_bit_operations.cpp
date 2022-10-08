#include <iostream>
#include <string>
#include <vector>
using namespace std;

void getbit()
{
    int n, pos;
    cout << "Enter the getbit number and pos";
    cin >> n >> pos;

    cout << ((n & (1 << pos)) != 0) << endl;
}
void setbit()
{
    int n, pos;
    cout << "Enter the setbit number and pos";
    cin >> n >> pos;
    cout << (n | (1 << pos))  << endl;
}
void clearbit()
{
    int n, pos;
    cout << "Enter the clearbit number and pos";
    cin >> n >> pos;
    cout << (n & (~(1 << pos))) << endl;
}

void updatebit()
{
    int n, pos;
    cout << "Enter the updatebit number and pos";
    cin >> n >> pos;
    cout << (n | (~(1 << pos))) << endl;
}
int main()
{

    getbit();
    setbit();
    clearbit();
    updatebit();

    return 0;
}