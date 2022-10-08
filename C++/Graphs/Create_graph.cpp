#include<iostream>
#include<string>
#include<vector>
using namespace std ;


int main(){

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

for(int  i=1 ; i<=v ; i++)
{
    cout<<i<<"-->";
    for(int j =0 ; j <g[i].size() ; j++ )
    {
        cout<<g[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"\n\n\n\n\n\n";


/*matrix implementation*/ 
vector<vector<int>> m(v+1, vector<int>(v+1,0));
for(int i=0 ; i<e ; i++)
{
    int x,y;
    cin>>x>>y;
    m[x][y] = 1;
    m[y][x] = 1;
}

for(int i =1 ; i<=v ; i++)
{
    for(int j =1 ; j<=v ; j++)
    {
            cout<<m[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
