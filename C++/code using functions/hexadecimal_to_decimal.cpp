#include<iostream>
#include <bits/stdc++.h>
using namespace std ;

int Hexatodecimal(string n, int a ){
    int ans = 0;
    int x = 1;
    int y =0;
    for(int i = a-1 ;i>=0 ; i--) {
        if(n[i]>='0' && n[i]<='9'){
            ans+= (n[i]-'0')*x; /// This is done so to convert the char to int and also it take care of the value upto '9'
            x*=16; 
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += x*(n[i]-'A' +10);
            x*=16;
        }
    }
    return ans;
}

int main(){
int a,b;
string n;
cout<<"enter the string"<<endl;
cin>>n;
a = n.size();
cout<<Hexatodecimal(n,a)<<endl;    
    return 0;
}