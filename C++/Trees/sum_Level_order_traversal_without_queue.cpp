#include<iostream>
#include<cmath>
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

int levelorder(node* head , int level1,int level2,int max,int curlev, int &sum1, int &sum2)
{
	if(curlev == level1)
	{
		sum1 += head->data;
	}
	if(curlev == level2)
	{
		sum2 += head->data;
	}

	if(curlev != max )
	{
		
		if(head->left != NULL)
			levelorder(head->left,level1,level2,max, curlev+1, sum1,sum2);
		if(head->right != NULL)
			levelorder(head->right,level1,level2,max, curlev+1, sum1,sum2);
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
		// levelorder(head,slevel,0,ans2);
		if(ans1 > ans2)
		{
			cout<<"Sonu";
		}
		else cout<<"Sweety";


	}
	return 0;
}