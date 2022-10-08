#include<iostream>
#include<string>
#include<stack>

using namespace std ;


void reverse(string s){
    stack<string> t;
    for(int i =0; i <s.length();i++){
        string word="";
        while(s[i] != ' ' && i<s.length()){
            word +=s[i];
            i++;
        }
        t.push(word);
    }
    while(t.empty() == false){
        cout<<t.top()<<" ";
        t.pop();
    }
}

int main(){
int n;
string s ="Hi bro how are you";

reverse(s);
    
    return 0;
}