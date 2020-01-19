#include<iostream>
#include<algorithm>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
};

Node* newnode(int data)
{
	Node* temp = new Node;
	temp->data =data;
	temp->right =NULL;
	temp->left =NULL;
	return temp;
}

void postorder(Node* node)
{
	if(node==NULL)
		return;

	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" ";
}

int main()
{	
	Node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);		

	postorder(root);
}