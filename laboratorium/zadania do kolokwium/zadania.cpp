#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct List
{
	int wiek;
	string imie;
	List* next;
	
};

void wypisz(List* &head)
{
	auto tmp = head;

	while (tmp != nullptr)
	{
		cout << tmp<< " ";
		tmp = tmp->next;
	}
}



void AddFront(List* &head, int wiek, const string& imie)
{
	head = new List{  wiek, imie , head };
}

void save(const string& file_name, List* head )
{
	ofstream plik("file_name.txt",ios::binary);
	auto tmp = head;
	while (tmp != nullptr)
	{
		plik << tmp->wiek << endl;
		tmp - tmp->next;
	}
	plik.close();
}

/* void dodaj(List* &head)
{
	auto wsk = head;

	if (head == nullptr)
	{
		head = new List{ 10, nullptr };
		return;
	}

	while (wsk->next != nullptr)
	{
		wsk = wsk->next;
	}

	wsk->next = new List{ 10, nullptr }; 
} */


int main()
{
	List *head = nullptr;
	AddFront(head, 1, "Ola");
	AddFront(head, 2, "Marta");
	AddFront(head, 3, "Magda");
	AddFront(head, 4, "Rafa³");
	AddFront(head, 5, "Przemek");

	wypisz(head);

	save("dane", head);



	system("pause");
	return 0;

}