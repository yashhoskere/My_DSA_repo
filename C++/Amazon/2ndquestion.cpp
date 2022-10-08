!#include<iostream>
#include<bits/stdc++.h>
using namespace std ;




int main(){
int a,b,n;
cout<<"Enter the number"<<endl; 
cin>>n;
vector<int> price = {1,3,2,4,5};
vector<int> cul(n,0);

cul[0]= price[0];
for(int i=1 ; i<n ; i++)
{
        cul[i] += cul[i-1] + price[i];
}

int Min = INT_MAX;
int month ;
for(int i =1  ; i <= n ; i++)
{
    if(Min > abs( cul[i-1]/i - (cul[n-1] - cul[i-1])/(n-i) ))
    {Min = abs( cul[i-1]/i - (cul[n-1] - cul[i-1])/(n-i) );
    month = i;
    }
}
    
    return month;
    
}