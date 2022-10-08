#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter the numbers"<<endl;
    cin>>a;
    cin>>b;

    switch (a +b)
    {
    case a+a: // Switch cannot have varible in it. It can however have expression involving intergers.
        cout<<'1';
        break;
    
    case 1+1:
        cout<<'2';
        break;
    
    case 3:
        cout<<'3';
        break;
    
    default:
        break;
    }
}

