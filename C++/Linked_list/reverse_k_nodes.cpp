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
		// next =NULL;
	}
};
void insert(node *&head, int data)
{
	node *temp = head;
	node *n = new node(data);
	if (head == NULL)
	{
		head = n;
		return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}

void Reverse(node *&temp, int reverse, int no_elements)
{
	node *pre = NULL;
	node *cur = temp;
	node *nxt = cur->next;
	int groups = no_elements / reverse;
	int groups1 = groups;

	for (int p = 0; p < groups; p++)
	{
		for (int i = 1; i < reverse; i++)
		{
			pre = cur;
			cur = nxt;
			nxt = nxt->next;
			cur->next = pre;
		}

		pre = NULL;
		if(nxt != NULL){
		cur = nxt;
		nxt = nxt->next;
		}
		if (groups1-- > 1)
		{
			node *k = cur;
			for (int j = 1; j < reverse; j++)
			{
				k = k->next;
			}
			temp->next = k;
			temp = cur;
		}
		else
		{
			if ((no_elements % reverse) == 0)
			{
				temp->next = NULL;
			}
			else
			{
				temp->next = cur;
			}
		}
	}
}

void display(node *&head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	int test_case, data, reverse;
	cin >> test_case;
	for (int i = 0; i < test_case; i++)
	{
		node *head = NULL;
		int no_elements;
		cin >> no_elements;
		for (int j = 0; j < no_elements; j++)
		{
			cin >> data;
			insert(head, data);
		}
		cin >> reverse;
		node *temp = head;

		for (int k = 1; k < reverse; k++)
		{
			head = head->next;
		}

		Reverse(temp, reverse, no_elements);
		display(head);
	}
}
