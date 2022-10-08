#include<bits/stdc++.h>

using namespace std ;



bool cmp(pair<int,int> &a , pair<int,int> &b)
{
    return a.second > b.second;

}


int main(){
int a,b,n;
cout<<"Enter the number of node"<<endl; 
cin>>n;
cout<<"Enter the number of edges"<<endl; 
cin>>e;

vector<pair<int,int>> deg(n);
vector<vector<int>> adj;
map<int * , int> m;
int x,y;

for(int i=0 ; i<e ; i++)
{
    cin>>x>>y;
    adj[x].push_back(&y);
    adj[y].push_back(&x);
}
    
for(int i =0 ; i < n ; i++)
{
    pair<int,int> x = {&adj[0],adj[i].size()};
    deg[i] = x;
   
}

int cnt =0;
int ans =0
while(cnt <n)
{
    ans++;
    sort(deg.begin() , deg.end() , cmp);
    int node = deg[0].first;
    cnt += deg[0].second;
    for(auto i : adj[node])
    {

    }
}


    return 0;
}