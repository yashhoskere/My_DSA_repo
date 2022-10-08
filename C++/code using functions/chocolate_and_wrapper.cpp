#include<iostream>
#include<string>
#include<vector>
using namespace std ;
// 1rupees =1 chocolate, 3 wrappers = 1 chocolate. how many chocolate for 15 rupees.

int chocolate(int n){
    int choc = n;
    int wrapper = n;
    while(wrapper >=3){
        choc += wrapper/3;
        wrapper = wrapper/3 +wrapper%3; 
    }
    return choc;

}

int main(){
int a,b,n;
cout<<"Enter the number"; 
cin>>n;

    cout<<chocolate(n);
    return 0;
}