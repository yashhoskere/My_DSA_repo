#include<iostream>
#include<queue>

using namespace std;

class node{
 public:
    int data;
	node*left =NULL;
	node*right=NULL;
	node(int val)
	{
			data =val;
	}
};

void insert(node* &head ,int val)
{
	node* temp = head;
	if(head == NULL)
    {
		 node* n = new node(val);
		 head =n;
		 return;
	}
	  

		 if(temp->data >= val)
		 {
			 if(temp->left == NULL)
			 {
				 node* n = new node(val);
				 temp->left = n;
				 return;
			 }
			 temp = temp->left;
			 insert(temp,val);
			 return;
		 }
		 else
		 {
			 if(temp->right == NULL)
			 {
				 node* n = new node(val);
				 temp->right = n;
				 return;
			 }
			 temp = temp->right;
			 insert(temp,val);
			 return;
		 }
		 
}


void preo(node* temp)
{
	
	if(temp  == NULL)
	{
		return;
	}
	cout<<temp-> data<<" ";
	preo(temp->left);
	preo(temp->right);
}
void ino(node*temp)
{
	
	if(temp  == NULL)
	{
		return;
	}
	ino(temp->left);
	cout<<temp-> data<<" ";
	ino(temp->right);
}
void posto(node*temp)
{
	
	if(temp == NULL)
	{
		return;
	}
	posto(temp->left);
	posto(temp->right);
	cout<<temp-> data<<" ";
}

void levelO(node* head)
{
   
    if(head == NULL)
        return;
 

    queue<node*> q;
 
   
    q.push(head);
 
    while (q.empty() == false) {
        
        node* node = q.front();
        cout << node->data << " ";
        q.pop();
 
       
        if (node->left != NULL)
            q.push(node->left);
 
      
        if (node->right != NULL)
            q.push(node->right);
    }
}



int main()
{
	node*head =NULL;
int t,p;
cin>>t;
while(t--)
{
	cin>>p;
	insert(head,p);
}
node*temp =head;
ino(temp);
cout<<endl;
preo(temp);
cout<<endl;
posto(temp);
cout<<endl;
levelO(temp);
}
