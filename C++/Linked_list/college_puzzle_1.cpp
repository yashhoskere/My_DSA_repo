#include <iostream>

using namespace std;

class Node
{

public:
    int data;

    Node *next;

    Node(int data)
    {

        this->data = data;

        next = NULL;
    }

    ~Node()
    {

        if (next)
            delete next;
    }
};

void printList(Node *head)
{

    while (head)
    {

        cout << head->data << " ";
        head = head->next;
    }

    cout << "\n";
}

Node *reverseList(Node *head)
{

    if (!head || !head->next)
        return head;

    Node *nxt = head->next;

    Node *newList = reverseList(nxt);

    nxt->next = head;

    head->next = NULL;

    return newList;
}

Node *deleteFrands(Node *head, int k)
{

    if (k == 0 || !head)
        return head;

    int n = 0;

    bool deletedFrand = false;

    Node *secondLast = NULL, *temp = head, *prev = NULL, *ret = head;

    while (temp)
    {

        if (prev && temp->data > prev->data && k)
        {

            deletedFrand = true;

            k--;

            Node *del = prev;

            if (prev == ret)
            {

                ret = temp;

                prev = NULL;
            }
            else
            {

                prev->next = NULL;

                prev = secondLast;

                secondLast = secondLast->next;
            }

            delete del;
        }
        else
        {

            Node *t = temp->next;

            temp->next = prev;

            secondLast = prev;

            prev = temp;

            temp = t;

            n++;
        }
    }

    head = reverseList(prev);

    if (!deletedFrand)
    {

        temp = head;

        n -= k;

        if (n == 0)
        {

            delete head;

            return NULL;
        }

        while (--n)
            temp = temp->next;

        delete temp->next;

        temp->next = NULL;
    }

    return head;
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n, k;

        cin >> n >> k;

        Node *head = NULL, *tail = NULL;

        while (n--)
        {

            int data;

            cin >> data;

            Node *newNode = new newNode(data);

            if (!head)
            {

                head = newNode;

                tail = newNode;
            }
            else
            {

                tail->next = newNode;
                tail = newNode;
            }
        }
        head = deleteFrands(head, k);
        printList(head);
    }
}