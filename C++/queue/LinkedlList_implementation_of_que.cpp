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

class que
{
    node* head;
    node*tail;
public:
    que()
    {
        head = NULL;
        tail = NULL;
    }

    void nque(int val)
    {
        node *n = new node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        else
        {
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            tail->next = n;
        }
        
    }
    int dque()
    {
        if (head == NULL)
        {
            cout<<"Empty";
            return -1;
        }
        cout << head->data << " ";
        node* todelete = head;
        head = head->next;
        delete todelete;
    }
};

int main()
{

    que q;
    q.nque(1);
    q.nque(2);
    q.nque(3);
    q.nque(4);

    q.dque();
    q.dque();
    q.dque();
    q.dque();

    return 0;
}