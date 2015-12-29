#include <iostream>

using namespace std;


struct Node

{
	int val;
	Node *left, *right;
	
};

void Print(Node* root)
{
	if (!root)
		return;
	cout << root->val << " ";
	Print(root->right);
	Print(root->left);



}




void AddRecursive(Node*&root, int val)
{
	if (root == NULL)
	{
		Node* nowe_drzewo = new Node;
		nowe_drzewo->left = NULL;
		nowe_drzewo->right = NULL;
		nowe_drzewo->val = val;
		root = nowe_drzewo;
		return;
	}

	if (val < root->val)
	{
		AddRecursive(root->left, val);

	}
	
	else
	{
		AddRecursive(root->right, val);
	}
	
}

void usun_drzewo(Node* &root)
{
	if (root != NULL)
	{
		usun_drzewo(root->left);
		usun_drzewo(root->right);
		delete root;
		root = NULL;
	}
}

void dodawanie(Node* &root, int val)
{
	if (root != NULL)
	{
		root = new Node{ val, NULL, NULL };
	}
}




int main()
{

	Node* root = nullptr;
	AddRecursive(root, 5);
	AddRecursive(root, 10);
	AddRecursive(root, 0);

	Print(root);
	





	system("pause");
	return 0;
}