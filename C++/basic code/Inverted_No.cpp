#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,i,j;
    cout<<"Enter a number!"<<endl;
    cin>>a;
    for(i=a ; i>=1 ; i--){
        for(j=1 ; j<=i; j++){
            cout<<j<<" ";
        }
     cout<<endl;
    }
}