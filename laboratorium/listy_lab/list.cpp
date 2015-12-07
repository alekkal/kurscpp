#include <iostream>

using namespace std;

struct ListElem //struktura, ktora reprezentuje pojedynczy element listy 
{
	int val;
	ListElem* next; // wskaznik na element nastepny
};

struct List
{
	ListElem* head;
};

void AddFront(ListElem* &head, int val) //glowa wskazuje na null
{
	head = new ListElem{ val, head };
}

void AddFront(List &list, int val)
{
	list.head = new ListElem;
}

void wypisz(ListElem* &head)
{
	auto tmp = head;

	while (tmp != nullptr)
	{
		cout << tmp->val << " " << endl;
		tmp = tmp->next;
	}
}

void usun(ListElem* &head)
{
	auto do_usuniecia = head;

	while (head)
	{
		do_usuniecia = head;
		head = do_usuniecia->next;
		delete do_usuniecia;

	}
}


int main()
{

	List list{ nullptr };
	ListElem* head = nullptr;



	/* head = new ListElem{ 5, nullptr };

	head->next = new ListElem{ 6, nullptr }; */

	
	AddFront(head, 5);
	AddFront(head, 6);

	
	auto tmp = head;

	while (tmp!=nullptr)
	{
		cout << tmp->val << " " << endl;
		tmp = tmp->next;
	}

	auto do_usuniecia = head;

	while (head)
	{
		do_usuniecia = head;
		head = do_usuniecia->next;
		delete do_usuniecia;

	}


	system("pause");
	return 0;
}