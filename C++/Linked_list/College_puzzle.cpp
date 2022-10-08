#include <iostream>
using namespace std;

class node
{
public:
    int popularity;
    node *next = NULL;
    node* pre =NULL;

    node(int val)
    {
        popularity = val;
    }
};

void addfriend(node *&head, int popularity, int friends)
{

    if (head == NULL)
    {
        head = new node(popularity);
        return;
    }
    node *temp = head;
    node *n = new node(popularity);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    n->pre = temp;
    temp->next = n;
}
void Delete(node *&head, int friends, int to_delete)
{
    bool deletefriend = false;
    node *temp = head;

        while (temp->next != NULL)
        {
            if (!to_delete)
            {
                break;
            }
           
            if (to_delete && (temp->popularity < temp->next->popularity))
            {
                if (temp->pre == NULL)
                {
                    temp->popularity = temp->next->popularity;
                    temp->next = temp->next->next;
                    temp->next->pre = temp; 
                    deletefriend = true;
                    friends--;
                    to_delete--;
                }
                else
                {
                    temp->popularity = temp->next->popularity;
                    temp->next = temp->next->next;
                     temp->next->pre = temp; 
                    temp = temp->pre;
                    deletefriend = true;
                    friends--;
                    to_delete--;
                }
            }
            else
            {
                temp = temp->next;
            }
        }
        if (!deletefriend)
        {
            for(int k =0 ;k < (friends - to_delete); k++){
            cout<<head->popularity<<" ";
            head = head->next;
            }
            return;
            
        }else{
        for(int k =0 ;k < friends; k++){
            cout<<head->popularity<<" ";
            head = head->next;
            }

        }
}

int main()
{
    int total_cases, popularity;
    cin >> total_cases;
    int friends, to_delete;

    for (int j = 0; j < total_cases; j++)
    {
        node *head = NULL;
        cin >> friends >> to_delete;

        for (int j = 0; j < friends; j++)
        {

            cin >> popularity;
            addfriend(head, popularity, friends);
        }
        Delete(head, friends, to_delete);
        cout << endl;
    }
}