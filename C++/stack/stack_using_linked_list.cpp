#include <iostream>

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

class Stack
{

public:
    node *head = NULL;
    node *temp = head;
    void push(int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            temp = n;
            return;
        }
        temp->next = n;
        temp = temp->next;
    }
    void top()
    { 
        cout << temp->data << endl;
    }
    void pop()
    {
        node *move = head;
        if (head == temp)
        {
            head == NULL;
            temp == NULL;
            cout << "Now stack is empty";
        }
        if (head == NULL)
        {
            cout << "Underflow" << endl;
        }
        while (move->next->next != NULL)
        {
            move = move->next;
        }
        temp = move;
        temp->next = NULL;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.top();
    s.pop();
    s.top();
    return 0;
}
