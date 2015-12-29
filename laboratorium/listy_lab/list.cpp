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


void wypisz(ListElem* &head)
{
	auto tmp = head;

	while (tmp != nullptr)
	{
		cout << tmp->val << " ";
		tmp = tmp->next;
	}
}

void odtylu(ListElem* &head)
{
	if (head)
	{
		odtylu(head->next);
		cout << head->val << " ";
	}
}



void AddFront(ListElem* &head, int val)
{
	head = new ListElem{ val, head };
}

void dodaj(ListElem* &head)
{
	auto wsk = head;
	
	if (head==nullptr)
	{
		head = new ListElem{ 10, nullptr };
		return;
	}

	while (wsk->next != nullptr)
	{
		wsk=wsk->next;
	}

	wsk->next = new ListElem{ 10, nullptr };

}

void elem(ListElem* &head, int n)
{

	ListElem* spr = head;
	while (spr->next)
	{
		if (spr->val == n)
		{
			cout << "istnieje" << endl;
			return;
		}
		spr = spr->next;
	}

	cout << "nie istnieje" << endl;
}





int main()
{

	


	ListElem*head = nullptr;
	head = new ListElem{ 5, nullptr };
	head->next = new ListElem{ 6, nullptr };

	AddFront(head, 5);
	AddFront(head, 6);

	for (int i = 1; i < 20;)
	{
		AddFront(head, i);
		 i++;
	}




	wypisz(head);

	cout << endl;
	odtylu(head);

	cout << endl;
	dodaj(head);


	elem(head, 212);
	cout << endl;

	// napisz funkcjê, ktora dodaje do listy elementy w taki sposób, aby wszystkie elementy w liœcie by³y posortowane
	//albo malej¹co albo rosn¹co. Jedynie za pomoc¹ tej funkcji elementy bêd¹ dodawane do listy (AddSorted)
	//


	system("pause");
	return 0;
}