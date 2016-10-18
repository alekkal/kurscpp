#include <iostream>

using namespace std;




struct Elem
{
	int val;
	Elem* next;
};
void add(Elem** head, int val)
{
	Elem* tmp = new Elem;
	tmp->val = val;
	tmp->next = *head;
	*head = tmp;
}
void print1(Elem* e)
{
	if (e)
	{
		print1(e->next);
		cout << e->val << " " << endl;
	}
}
void print2(Elem* e)
{
	if (e)
	{
		cout << e->val << " "<<endl;
		print2(e->next);
	}
}
void print3(Elem* e)
{
	while (e)
	{
		cout << e->val << " "<<endl;
		e = e->next;
	}
}
int main()
{
	Elem* head = NULL;
	add(&head, 7);
	add(&head, 5);
	add(&head, 6);
	// Wiec elementy sa w kolejnosci: 6, 5, 7
	print1(head);
	// 7, 5, 6
	print2(head);
	// 6, 5, 7
	print3(head);
	// 6, 5, 7

	system("pause");
	return 0;
}