#include <iostream>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;
    node(int val)
    {
        data = val;
    }
};

void insert(node *&head, int root, int val, char side) // Insertion process
{
    node *temp = head;
    if (head == NULL)
    {
        node *n = new node(root); // Insering new node if tree is empty
        head = n;
        if (head->data < val)
        {
            head->right = new node(val);
            if (side == 'R')
            {
                return;
            }
            else
            {
                cout << '1' << endl;
                exit(0);
            }
        }
        if (head->data >= val)
        {
            head->left = new node(val);
            if (side == 'L')
            {
                return;
            }
            else
            {
                cout << '1' << endl;
                exit(0);
            }
        }
        return;
    }

    if (temp->data > root) // if value to be inserted is less than or equal to the node
    {
        temp = temp->left;
        insert(temp, root, val, side);
        return;
    }
    else if (temp->data == root)
    {
        
        if (temp->data < val)
        {
            temp->right = new node(val);
            if (side == 'R')
            {
                return;
            }
            else
            {
                cout << '1' << endl;
                exit(0);
            }
        }
        else if (temp->data >= val)
        {
            temp->left = new node(val);
            if (side == 'L')
            {
                return;
            }
            else
            {
                cout << '1' << endl;
                exit(0);
            }
        }
    }
    else // if value to be inserted is greater than the node value.
    {
        temp = temp->right;
        insert(temp, root, val, side);
        return;
    }
}

int main()
{
    node *head = NULL;
    int t, root, child;
    char side;
    cin >> t;
    while (t--)
    {
        cin >> root >> child >> side;
        insert(head, root, child, side);
    }
    cout << '0' << endl;
}
