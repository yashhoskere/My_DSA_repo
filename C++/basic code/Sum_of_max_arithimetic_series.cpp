#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int max ,i , n , array[10] , int_diff, sum ;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;

    for(i = 0 ; i< n ; i++)
    {
        cin>>array[i];
    }
    max = array[0];
    for(i = 0 ; i< n ; i++)
    {
        sum = array[i];
    int_diff = array[i+1] - array[i];

    while(array[i+1] - array[i] == int_diff) {
        sum +=  array[i+1];
        max = max > sum? max : sum;
        i++;
    } 
   
    }
cout<<"The biggest sequence is "<<max;

}