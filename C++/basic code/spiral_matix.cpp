#include<iostream>
using namespace std;
int fill_matrix(int i , int j , int r, int c , int a[10][10] ,int l ,int k ,int m)
{
    
    do{
        cout<<a[k][l];
        l++;
    }while(( ( i =! k) or (j =! l)) && (m<= i , j <=r));

    l--;
    k++;

    do{
        cout<<a[k][l];
        k++;
    }while(( ( i =! k) or (j =! l)) && (m<= i , j <=r));


    l--;
    k--;
    
    do{
        cout<<a[k][l];
        l--;
    }while(( ( i =! k) or (j =! l)) && (m<= i , j <=r));

    l++;
    k--;
    
    do{
        cout<<a[k][l];
        k--;
    }while(( ( i =! k) or (j =! l)) && (m<= i , j <=r));

    k++;
    l++;
    if ()
    m++;s
    r--;
    fill_matrix( i ,  j ,  r,  c , a , l , k ,m);
}

int main()
{
    int r , c , l=0,k=0 , i ,j , a[10][10],m = 0;
    cout<<"Enter the size";
    cin>>r>>c;
    cout<<"Enter the elements";
     for(i = 0 ; i<r ; i++ )
    {
        for(j =0 ; j < c ; j++)
        {
            cin>>a[i][j];

        }
    }

    fill_matrix(i , j, r ,c , a ,l, k ,m);


}