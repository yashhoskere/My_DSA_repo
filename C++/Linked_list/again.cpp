#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node
{
public:
	int data;
	node *next = NULL;
	node(int val)
	{
		data = val;
	}
};

void insert(node *&head, int val)
{
	node *n = new node(val);
	node *temp = head;
	if (head == NULL)
	{
		head = n;
		return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}

int main()
{
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		node *head = NULL;
	int val;
	cin>>val;
		while(val != -1){
		insert(head, val);
		cin >> val;
		}
		
		// unique(head,max);

		int arr[100000] = {0};
		// int arr1[10] ={0};
		int count = 0;
		node *temp = head;
		queue<int> Q;
		while (temp != NULL)
		{
			if (arr[temp->data] == 0)
			{
				arr[temp->data] = 1;
				Q.push(temp->data);
				// arr1[count] = temp->data;
				count++;
			}
			temp = temp->next;
		}

		while (!Q.empty())
		{
			cout << Q.front() << " ";
			Q.pop();
		}
		// int j =0;
		// while(j < count ){
		// 	cout<<arr1[j]<<" ";
		// 	j++;
		// }
		cout << endl;
	}
	return 1;
}

// #include<iostream>
// #include<queue>
// #include<climits>
// using namespace std;

// class node{
// public:
// int data;
// node* next= NULL;
// node(int val){
// 	data = val;
// }
// };

// void insert(node* &head,node* &temp1, int val){
// 	node* n = new node(val);
// 	if(temp1 == NULL){
// 		head = n;
// 		temp1 = n;
// 		return;
// 	}
// 	temp1->next = n;
// 	temp1 = temp1->next;

// }

// int main()
// {
// int cases;
//  int val;
// cin >> cases;
// for( int i = 0; i<cases;i++){
// 	node* head =NULL;
// 	node*temp1 = head;
//      int max = INT_MIN;
// 	cin>>val;
// 	while(val != -1){
// 		if(val>max){
// 			max =  val;
// 		}
// 		insert(head,temp1,val);
// 		cin>>val;
// 	}

// 	int arr[10] ={0} ;
// 	int count = 0;
// 	node* temp = head;
// 	queue<int> Q;
// 	while(temp != NULL)
// 	{
// 	if(arr[temp->data] == 0)
// 	{
// 		arr[temp->data] = 1;
// 		Q.push(temp->data);
// 		// arr1[count] = temp->data;
// 		count++;
// 	}
// 	temp = temp->next;
// 	}

// 	while(!Q.empty()){
// 		cout<<Q.front()<< " ";
// 		Q.pop();
// 	}
// 	// int j =0;
// 	// while(j < count ){
// 	// 	cout<<arr1[j]<<" ";
// 	// 	j++;
// 	// }
// 	cout<<endl;

// }
// return 0;

// }
