#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std ;




int main(){
int a,b,n;
cout<<"Enter the number"<<endl; 
cin>>n;

// Creating a graph

int e,v;
cout<<"Enter the number"<<endl; 
cin>>v>>e;

// Linked list inplementation

vector<vector<int>> g(v+1);
for(int i=0 ; i<e ; i++)
{
    int x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
}

//implementing BFS

vector<int> input(n);
queue<int> q;
for(int i =0 ; i<n;i++)
{
    cin>>input[i];
}
q.push(input[0]);

while(!q.empty())
{
    
}

    return 0;
}