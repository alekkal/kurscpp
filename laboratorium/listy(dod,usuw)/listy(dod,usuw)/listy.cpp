#include <iostream>

using namespace std;

struct Lista
{
	int val;
	Lista *ptr;
};

void addList(Lista *&start);
void printList(Lista *&start);
void addFront(Lista *&start);
void addBack(Lista *&start);
int countList(Lista *&start);
void delList(Lista *&start);




int main()
{
	Lista *start;
	start = nullptr;


	addFront(start);

	printList(start);
	countList(start);

	cout << endl << countList(start);

	delList(start);




	system("pause");
	return 0;
}

void printList(Lista *&start)
{
	Lista *p;
	p = start;

	while (p)
	{
		cout << p->val << " ";
		p = p->ptr;
	}
}

void addFront(Lista *&start)
{
	Lista *p;
	p = start;
	
	for (int i = 0; i < 10; i++)
	{
		p = new Lista;
		p->val = i;
		p->ptr = start;
		start = p;
	}
}



int countList(Lista *&start)
{
	int V = 0;
	Lista *p;
	p = start;

	while (p)
	{
		V++;
		p = p->ptr;
	}

	return V;
}


void delList(Lista *&start)
{
	Lista *p;

	while (start);
	{
		p = start;
		cout << start->val << "\t";
		start = start->ptr;
		if (start) 
			cout << start->val << "\n";

		delete p;
	}
}