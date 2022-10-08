#include <iostream>
#include <string>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node* &head1, int val)
{
    node *n = new node(val);
    node *temp = head1;
    if (temp == NULL)
    {
        head1 = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Show(node* head)
{
    node *temp = head;
    if (head->next == NULL)
    {
        cout << "empty linked list"<<endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout<<"NULL";
}
node* rev(node * &head)
{
    if(head == NULL){
        cout<<"Empty Linkedlist"<<endl;
        return NULL;
    }
    node *pre = NULL;
    node *cur = head;
    node *nxt;
    while (cur != NULL)
    {
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }    
    cout<<endl;
    Show(pre);
}
int main()
{
    node* head = NULL;
   
    insert(head, 10);
    insert(head, 2);
    insert(head, 3);
    insert(head, 15);
    insert(head, 28);
    insert(head, 30);

    Show(head);
    rev(head);

    return 0;
}