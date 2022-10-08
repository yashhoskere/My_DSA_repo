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


void insert(node* &temp,node*&head, int val){
	node* n = new node(val);
	if(temp == NULL){
        temp = n;
        head =n;
        return;
    }
    temp->next =n;
    
    temp = temp->next;


}
void display(node* head)
{ // pass by value

    node *temp1 = head;
     while (temp1 != NULL)
    { // Here we are iterating till the last node
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    
}
int main(){
    node* head=NULL;
    node* temp = head;
    insert(temp,head,1);
    insert(temp,head,2);
    insert(temp,head,3);
    insert(temp,head,4);

    display(head);

}
