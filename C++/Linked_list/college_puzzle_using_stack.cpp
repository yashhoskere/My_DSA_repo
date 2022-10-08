#include <iostream>
#include<stack>
using namespace std;

class node{
public:
	int popularity;
	node* next = NULL;
	 node(int val){
		 popularity = val;
	 }
};

void addfriend(node* &head,int popularity, int friends){

	
	node*temp = head;
	node* n = new node(popularity);
	if(head == NULL){
		head = n;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
	
}



// void print(stack<int> s , int count){
// 	int arr[count];
// 	for(int i = count-1; i>=0;i--){
// 		arr[i]=s.top();
// 		s.pop();
// 	}
// 	for(int i = 0; i<count;i++){
// 		cout<<arr[i]<<" ";
// 	}

	
// }
void Delete(node* &head, int friends ,int to_delete){
	int deletefriend = 0;
	node* temp = head;
	stack<int> s;
	int count=friends;
	int arr[friends]={0};
	int i =0;
	while( temp->next != NULL ){
		
		s.push(temp->popularity);
		arr[i] = temp->popularity;
		i++;
		temp = temp->next;
        if(temp->next==NULL && temp->popularity != -1){
            node* n =new node(-1);
            temp->next = n;
        }
		while((!s.empty()) && to_delete &&  (temp->next != NULL) && (s.top() < temp->popularity)  ){
			s.pop();
			i--;
			to_delete-- ;
			count--;
			deletefriend = 1;
		}
	}
			
			if(!deletefriend){
				while(to_delete >0 ){
					s.pop();
					count--;
					to_delete-- ;

				}
			}
			for(int i=0 ; i<count;i++){
				cout<<arr[i]<<" ";
			}
	
}


int main() {
	int total_cases, popularity;
	cin >> total_cases;	
	int friends,to_delete;	

	for(int j = 0 ; j<total_cases; j++)	{
		node* head =NULL;
		cin >>friends>>to_delete;

		for(int j = 0 ; j<friends; j++){

				cin>> popularity;	
				addfriend(head,popularity, friends);

		}
		Delete(head,friends,to_delete);
		cout<<endl;
		
			


	}
	return 0;						
			
}
