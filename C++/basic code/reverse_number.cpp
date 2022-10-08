#include <iostream>
#include<string.h>
using namespace std;

void reverse_string(string s){

    if(s.length() ==0){
        cout<< "zero length string"<<endl;
        return;
    }
    string z = s.substr(1);
    reverse_string(z);
    cout<<s[0] ;
    
}


int main(){
    reverse_string("yash");
    return 0;
}