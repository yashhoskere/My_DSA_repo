#include<iostream>
#include<string>
using namespace std ;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { int i =0,j=0;
        string arr[2000];
        while(i <s.length()){
            string word="";
            if(s[i] != '.'){
                word += s[i];
                
            }if(s[i] =='.' || i==s.length()-1 )
            {
                
                arr[j] = word;
                j++;
                if(i==s.length()-1){
                    j--;
                    word="";
                    while(j>=0){
                        word += arr[j];
                        j--;
                    }
                    return word;
                }
                 arr[j]='.';
                 j++;
                }
                
                i++;
        }
    } 
};


int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
} 