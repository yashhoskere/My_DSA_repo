#include<iostream>
#include<cmath>
#include<queue>
using namespace std;

class node{
	public:
	int data;
	node* left =NULL;
	node* right =NULL;

	node(int val)
	{
		data = val;
	}

};

void insert(node* &head, int val)
{
	node* temp = head;
	if(head == NULL)
	{
		node* n = new node(val);
		head = n;
		return;
	}
	if(val > temp->data)
	{
		if(temp->right == NULL)
		{
			node* n = new node(val);
			temp->right =n;
			return;
		}
		insert(temp->right, val);

	}
	else
	{
		if(temp->left == NULL)
		{
			node* n = new node(val);
			temp->left =n;
			return;
		}
		insert(temp->left, val);
	}
	
	
}


void levelorder(node* head, int flevel, int slevel , int max, int curlevel, int &ans1,int &ans2)
{
        if(head == NULL)
        {
            return;
        }
        queue<node*> q;
        q.push(head);
        q.push(NULL);

        while(!q.empty())
        {
            node* node = q.front();
            q.pop();
            if(node != NULL)
            {
                if(curlevel == flevel)
                {
                     ans1 += node->data;
                }
                if(curlevel == slevel)
                {
                    ans2 += node->data;
                }
                if( curlevel < max )
                {
                    if(node->left)
                    q.push(node->left);
                    if(node->right)
                    q.push(node->right);
                }
            }
            else if(!q.empty())
            {
                q.push(NULL);
                curlevel++;
            }
        }
}




int main()
{
	int cases;
	cin>>cases;
	while(cases--)
	{
		int flevel,slevel, ans1=0,ans2=0,len;
		cin>>len;
		int val;
		node*head =NULL;
		while(len--)
		{
			cin>>val;
			insert(head,val);
		}
		cin>>flevel>>slevel;
		int max = flevel>slevel ? flevel:slevel;
		levelorder(head,flevel,slevel,max,0,ans1,ans2);
		if(ans1 > ans2)
		{
			cout<<"Sonu";
		}
		else cout<<"Sweety";


	}
	return 0;
}