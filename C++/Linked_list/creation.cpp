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
    { // constructor
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val)
{                            // pass by reference
    node *n = new node(val); // creating a new node of type node with passing constructor value to initialize it.
    if (head == NULL)
    { // If initial head itself is null we put first ndoe into it.
        head = n;
        return ;
    }
    node *temp = head;
    while (temp->next != NULL)
    { // Here we are iterating till the last node
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head)
{ // pass by value

    node *temp = head;
     while (temp != NULL)
    { // Here we are iterating till the last node
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL";
    
}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 2);
    insert(head, 3);
    display(head);

    return 0;
}