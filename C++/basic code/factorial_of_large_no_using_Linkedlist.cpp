#include <iostream>
#include <string>
#include <vector>
using namespace std;

class node
{
public:
    int data = 0;
    node *next = NULL;
};
void multiply_list(node* &head, int i)
{
   
    int q,carry =0;
    node* temp = head;
    while(temp!= NULL){
        q = (temp->data)*i;
        temp->data = (q + carry)%10;
        cout<<temp->data<<" ";
        carry = q/10;
        if(carry && temp->next == NULL){
            while(carry !=0){
            node* n = new node;
            temp->next = n;
            temp = temp->next;
            temp->data = carry%10;
            carry/=10;
            }
            temp->next = NULL;
            break;
        }
        temp = temp->next;
    }

}

void print(node* head){

        if(head->next != NULL){
            print(head->next);
            cout<<head->data;
            return;
        }
        cout<<head->data;
        return ;
        

    }

int fact(int i , int n, node* &head)
    {
       
        if(head == NULL){
            node* n = new node;
            head = n;
            head->data = 1;
        }
        if(i <= n)
        {
            multiply_list(head, i);
            fact(i++, n , head );
        }else{
            return 0 ;
        }
    }

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if( n==1 || n==2){
        return n;
    }
    int i =2;
    node* head = NULL ;

    fact(i, n, head);
    print(head);
    return 0;
}