#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,i,j,k;
    cout<<"Enter a number!"<<endl;
    cin>>a;
    for(i=1 ; i<=a ; i++){ // running till the end of the entered number
        for(j=1 ; j<=i; j++){ // this will create the right angle like pyramid by counting in sequence
            if(k = ((i+j))%2) // this will produce 01010101 sequence depending on whether the addition of i and j is even or odd.
                cout<<1<<" ";
            else    
                cout<<"0"<<" ";
        }
     cout<<endl;
    }
}