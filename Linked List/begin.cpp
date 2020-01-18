#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;
	
class Node{
public:
	int data;
	Node* next;
};

void push(Node** head_ref,int new_data) //At the beginning
{
	Node* temp = new Node();
	temp->data = new_data;
	temp->next = *head_ref;
	*head_ref = temp;
}

void append(Node** head_ref,int new_data)
{
	Node* temp = new Node();
	temp->data = new_data;
	temp->next = NULL;

	Node *last = *head_ref;

	if(*head_ref == NULL)
	{
		*head_ref = temp;
		return;
	}

	while(last->next!=NULL)
	{
		last = last->next;
	}

	last->next = temp;
	return;
}

void printList(Node* node)
{
	while(node!=NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;
	push(&head,1); //Output 1
	push(&head,2); //Output 2 1
	append(&head,4);

	printList(head);


	return 0; 
}