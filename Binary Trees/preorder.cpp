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
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void preorder(Node* node)
{
	if(node==NULL)
		return;

	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}
int main()
{
	Node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);		

	preorder(root);
}