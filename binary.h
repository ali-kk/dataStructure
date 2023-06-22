#include"node.h"

class binarysearch 
{
public:
	node* root;

	binarysearch()
	{
		root = NULL;
	}

void insert( int item)
{
	if (root == NULL)
	{
		node* p = new node;
		p->data = item;
		p->right = NULL;
		p->left = NULL;
		root = p;
		return;
	}
	else if (item > root->data)
	{
		root = root->right;
		insert(item);
	}
	else if (item < root->data)
	{
		root = root->left;
		insert(item);
	}
}


void preorder(node*& root)
{
	if (root != NULL)
	{
		cout << root->data;
		preorder(root->left);
		preorder(root->right);

	}

}

void postorder(node*& root)
{
	if (root != NULL)
	{

		postorder(root->left);
		postorder(root->right);
		cout << root->data;

	}
}

void inorder(node*& root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->data;
		inorder(root->right);
	}
}



bool search(node*& root, int item)
{
	if (root == NULL)
	{
		return false;
	}

	if (item == root->data)
	{
		return true;
	}
	else  if (item > root->data)
	{
		search(root->right, item);
	}
	else  if (item < root->data)
	{
		search(root->left, item);
	}


}
};

