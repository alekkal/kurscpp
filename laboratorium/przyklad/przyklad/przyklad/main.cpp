#include <iostream>
#include <string>
using namespace std;
struct Node
{
	string et;
	string Nazwisko;
	
	Node* left, *right;
};


struct FromText
{
	Node* et;
	FromText*prev, *next;
};

Node* find(const string& et, Node* root)
{
	while (root)
	{
		if (root->et == et)
			return root;
		if (et < root->et)
			root = root->left;
		else
			root = root->right;
	}
}


void AddToList(FromText* &head, Node* root, const string& et)
{
	Node* n = find(et, root);

}