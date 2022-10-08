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

void insert(node *&head1, int val)
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

void Show(node *head)
{
    node *temp = head;
    if (head->next == NULL)
    {
        cout << "empty linked list" << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
void rev(node *&head, node *&pre, node *&cur, node *&nxt)
{
    if (head == NULL)
    {
        cout << "Empty Linkedlist" << endl;
        return;
    }

    if (cur == NULL)
    {
        cout << endl;
        Show(pre);
        return;
    }
    nxt = cur->next;
    cur->next = pre;
    pre = cur;
    cur = nxt;
    rev(head, pre, cur, nxt);
}



int main()
{
    node *head = NULL;

    insert(head, 10);
    insert(head, 2);
    insert(head, 3);
    insert(head, 15);
    insert(head, 28);
    insert(head, 30);

    Show(head);

    node *pre = NULL;
    node *cur = head;
    node *nxt;

    rev(head, pre, cur, nxt);

    return 0;
}