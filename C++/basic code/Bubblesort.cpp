#include<iostream>
using namespace std ;
int bubblesort(int a[] ,int n)
{
    int temp , i ,j ;
    for(i = n-1 ; i >=1; i--)
    {
        for(j = 0 ; j <=i-1 ; j++){
            if(a[j] > a[j+1]){
                temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
            
        }
    }
}

int main(){
    int n ,i , a[10];
    cout<<"Enter the size of the array less than or equal to 10"<<endl;
    cin>>n;
    cout<<"Enter 10 numbers"<<endl;
    for(i = 0 ; i <n ; i++)
    {
        
        cin>>a[i];

    }
    bubblesort(a , n);
    for(i = 0 ; i <n ; i++)
    {
        
        cout<<a[i]<<" ";

    }
    return 0;
}