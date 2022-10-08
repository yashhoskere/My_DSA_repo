// #include <iostream>
// #include <queue>
// #include <climits>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next = NULL;
//     node(int val)
//     {
//         data = val;
//     }
// };

// void insert(node *&head, int val)
// {
//     node *n = new node(val);
//     node *temp = head;
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void unique(node *&head, int max)
// {
//     int arr[10000]={0};
//     node *temp = head;
//     queue<int> Q;
//     while (temp  != NULL)
//     {
//         if (arr[temp->data] == 0)
//         {
//             arr[temp->data] = 1;
//             Q.push(temp->data);
//         }
//         temp = temp->next;
//     }

//     while (!Q.empty())
//     {
//         cout << Q.front() << " ";
//         Q.pop();
//     }
//     cout << endl;
// }

// int main()
// {
    
//     int cases;
//     long long int val;
//     cin >> cases;
//     for (long long int i = 0; i < cases; i++)
//     {
//         node *head = NULL;
//         long long int max = INT_MIN;
//         cin >> val;
//         while (val != -1)
//         {
//             if (val > max)
//             {
//                 max = val;
//             }
//             insert(head, val);
//             cin >> val;
//         }
       
//       unique(head,max);
//     }
//     return 1;
// }

#include<iostream>
#include<queue>
#include<climits>
using namespace std;


class node{
public:
int data;
node* next= NULL;
node(int val){
	data = val;
}
};


void insert(node* &head, int val){
	node* n = new node(val);
	node*temp = head;
	if(head == NULL){
		head = n;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;

}

void unique(node*&head, int max ){
	int arr[100] = {0};
	node* temp = head;
	queue<int> Q;
	while(temp != NULL)
	{
	if(arr[temp->data] == 0)
	{
		arr[temp->data] = 1;
		Q.push(temp->data);
	}
	temp = temp->next;
	}
	
	while(!Q.empty()){
		cout<<Q.front()<< " ";
		Q.pop();
	}
	cout<<endl;


}

int main(){
int cases;
 int val;
cin >> cases;
for( int i = 0; i<cases;i++){
	node* head =NULL;
     int max = INT_MIN;
	cin>>val;
	while(val != -1){
		if(val>max){
			max =  val;
		}
		insert(head,val);
		cin>>val;
	}
	unique(head,max);

}
return 1;
}
