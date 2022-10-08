#include<iostream>
#include<string>

using namespace std;



void duplicate(string s){
    
    char first = s[0];
    cout<<first;
    int i =1;
    while(s[i] == first && s[i] != '\0'){
        i++;
    }
    if(s.length()==0){
        return;
    }
    duplicate(s.substr(i));
}

int main(){
    string s;
    cout<<"Enter the string \n";
    getline(cin,s);
    duplicate(s);
}