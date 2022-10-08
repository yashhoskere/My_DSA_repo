#include<iostream>
using namespace std;
int DTB(int x)
{
    if(x==1){
        cout<<'1';
        return 1;
    }
    int y = x%2;
    x = x/2;
    DTB(x);
    cout<<y;

}
int main()
{
    int a,b;
    cin>>a;
    DTB(a);
    

}
