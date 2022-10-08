#include<iostream>
using namespace std ;

int binarytodecimal(int n){
    int ans = 0;
    int x = 1;
    int y =0;
    while(n>0){
        y = n%10;
        ans += x*y;
        x *=2;
        n /=10;
    }
    return ans;
}

int main(){
int a,b,n;
cout<<"enter the number"<<endl;
cin>>n;
cout<<binarytodecimal(n)<<endl;    
    return 0;
}