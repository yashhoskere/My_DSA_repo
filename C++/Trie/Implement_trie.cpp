#include<bits/stdc++.h>
using namespace std;

class Trie
{
public:

unordered_map<char , Trie* > m;
bool end = false;
// Trie(){
//     end= false;
// }
};



void insert(Trie * node , string s)
{
    int i = 0;

    while(i < s.length())
    {
        if( (node->m).find(s[i]) == (node->m).end() )
        {
            Trie * temp = new Trie();
            (node->m)[s[i]] = temp;
            node = temp;
            i++;
        }
    }
    cout<<"done"<<endl;
    node->end = true;

}

bool search(Trie *node , string s)
{
    int i = 0;

    while(i < s.length())
    {
        if( (node->m).find(s[i]) != (node->m).end() )
        {
            node =node->m[s[i]];
            i++;
        }
        else
        {
            break;
        }
    }
    return node->end;

}



int main()
{
    // take input as a string

    // vector<string> list;

int n ;
cout<<"please type the no. of strings"<<endl;
cin>>n;
string s;

Trie * node = new Trie();
for(int i =0  ; i < n ; i++)
{
    cin>>s;
    insert(node,s);
}


cout<<search(node  ,"how")<<endl;
cout<<search(node  ,"where")<<endl;
cout<<search(node  ,"she")<<endl;

return 0;

}