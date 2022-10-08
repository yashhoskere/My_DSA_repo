#include<iostream>
using namespace std;
int DTB(int x)
{
    if(x>=1 && x<=7){
        cout<<x;
        return 1;
    }
    int y = x%8;
    x = x/8;
    DTB(x);
    cout<<y;

}
int main()
{
    int a,b;
    cin>>a;
    DTB(a);
    

}
