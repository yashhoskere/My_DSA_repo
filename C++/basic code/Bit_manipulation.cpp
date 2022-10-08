#include<iostream>
using namespace std ;

/// here we are trying to find the unique number 

int main()
{
    int i , j , n , input , count =0, array[10];
    cout<<"size of array"<<endl;
    cin>> n ;
    cout<<"Enter the elements array"<<endl;
    for(i = 0 ; i < n ; i++)
    {
    cin>>array[i];
    }


    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if( !(array[i]^array[j]) ) { // this will  v
                count++;
            }
        }
        if(count == 1){
            cout << "the no is "<< array[i];
            return 0;
        }
        else count = 0 ;
    
    }

}