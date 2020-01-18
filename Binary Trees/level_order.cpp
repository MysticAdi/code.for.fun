#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;


class Node{
public:
	int data;
	Node* left;
	Node* right;
};

void levelOrder(Node* root)
{
	if(root == NULL)
		return;
	queue<Node*> q;
	q.push(root);

	while(q.empty() == false)
	{
		Node* temp = q.front();
		cout<<temp->data<<" ";
		q.pop();

		if(temp->left!=NULL){q.push(temp->left);}
		if(temp->right!=NULL){q.push(temp->right);}
	}
}

Node* newnode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = NULL; temp->right = NULL;
	return(temp);
}

int main()
{

}