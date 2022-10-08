#include<bits/stdc++.h>
using namespace std;




void dfs(vector<vector<int>> &adj, int node,string str,vector<int> &vis)
{

if(adj[node].size()==0 ){
     str=str+to_string(node);
     cout<<str<<endl;
    return;
}
vis[node]=1;
for(int i=0;i<adj[node].size();i++)
{
    if(vis[adj[node][i]]==0)
      dfs(adj,adj[node][i],str+to_string(node),vis);

      
    // else
    // {
    //    cout<< str+to_string(node)<<endl;

    
    // }
}
vis[node]=0;
}


int main(){
    cout<<"Enter number of nodes";
    int n;
    cin>>n;
    cout<<"Enter Number of Edges:";
    int e;
    cin>>e;

    vector<int> vis(n,0);
    vector<vector<int>> graph(n);
    int a,b,wt;

    // for(int i=0; i<e; i++){

    //     cin>>a>>b>>wt;
    //     // cout<<a<<" "<<b;
    //     graph[a].push_back({b,wt});
    //     graph[b].push_back({a,wt});
    
    // }


       for(int i=0; i<e; i++){

        cin>>a>>b;
        // cout<<a<<" "<<b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // for(int i =1 ;i<=n ;i++)
    // {
    //     for(int j = 0 ; j<graph[i].size() ; j++)
    //     {
    //         cout<<i<<" "<<graph[i][j].first<<" "<<graph[i][j].second<<endl;
    //     }
    // }

        cout<<endl;

         dfs(graph,1,"",vis);
         

    return 0;
}