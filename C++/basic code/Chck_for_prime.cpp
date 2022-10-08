#include<iostream>
using namespace std ;
int main(){
int a,b,n;
cout<<"Enter the number";
cin>>a;
// Here i am dividing the number by 2
b = a/2;
    for(int i = 2 ; i <= b; i++){
        if(a%i == 0){
            cout<<"Not a prime";
            exit(0);
        }

    cout<<"It is a prime";
    }
    return 0;
}