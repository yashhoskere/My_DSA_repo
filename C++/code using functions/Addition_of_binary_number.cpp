#include<iostream>
#include<vector>
using namespace std;

int DTB(int x, vector<int> v) // using recursion
{   int c;
    if(x==1){
        cout<<"1";
        return 1;
        
    }
    c = x%2;
    x = x/2;
    DTB(x, v);
    v.push_back(c);
}



int main()
{ 
    vector<int> v,k;
    int p , q ;
    cin>>p>>q ;
    DTB(p,v);
    DTB(q,k);
    cout<<v<<" "<<k;
    
    // sum(p,q,0);
}
