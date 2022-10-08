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

void insert(node *&head, int val) // Insertion process
{
    node *temp = head;
    if (head == NULL)
    {
        node *n = new node(val); // Insering new node if tree is empty
        head = n;
        return;
    }

    if (temp->data >= val) // if value to be inserted is less than or equal to the node
    {
        if (temp->left == NULL)
        {
            node *n = new node(val);
            temp->left = n;
            return;
        }
        temp = temp->left;
        insert(temp, val);
        return;
    }
    else // if value to be inserted is greater than the node value.
    {
        if (temp->right == NULL)
        {
            node *n = new node(val);
            temp->right = n;
            return;
        }
        temp = temp->right;
        insert(temp, val);
        return;
    }
}

void ino(node *temp) // Inorder traversal.
{

    if (temp == NULL)
    {
        return;
    }
    ino(temp->left);
    cout << temp->data << " ";
    ino(temp->right);
}

node *min(node *temp) // finding the minimum from the right subtree
{
    node *x = temp;
    while (x && x->left != NULL)
        x = x->left;

    return x;
}

node *D(node *head, int val) // Deletion of node from BST
{
    if (head == NULL) // empty
        return head;
    if (val < head->data) // searching value in left subtree
        head->left = D(head->left, val);
    else if (val > head->data)
        head->right = D(head->right, val); // searching value in right subtree

    else
    {

        if (head->left == NULL && head->right == NULL) // leaf node
            return NULL;
        else if (head->right == NULL)
        { // If right subtree is null.
            node *temp = head->left;
            free(head);
            return temp;
        }
        else if (head->left == NULL)
        { // if left subtree is null.
            node *temp = head->right;
            free(head);
            return temp;
        }
        node *temp = min(head->right);
        head->data = temp->data;
        head->right = D(head->right, temp->data);
    }
    return head;
}

int main()
{
    node *head = NULL;
    int t, p;
    cin >> t;
    while (t--)
    {
        cin >> p;
        insert(head, p);
    }
    node *temp = head;
    ino(temp);
    cout << endl;
    cout << "Insert the value to be searched and deleted" << endl;
    int val;
    cin >> val;
    temp = D(head, val);
    ino(temp);
    cout << endl;
}
