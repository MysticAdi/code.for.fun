#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

class Node{
public:
	int data;
	Node* left;Node* right;
};

Node* newnode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left=NULL;temp->right=NULL;
	return temp;
}


int main()
{

}