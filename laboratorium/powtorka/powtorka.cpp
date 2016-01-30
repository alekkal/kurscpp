#include <iostream>
#include <fstream>

using namespace std;

struct Liczby
{
	int liczba;
	Liczby* next;
};

void dodaj(int x, Liczby* &head)
{
	auto b = head;  // zmienna tymczasowa za g³owê
	while (head == nullptr)
	{									// jeœli lista nie ma elementow tworzymy je (dodajemy)
		head = new Liczby{ x, nullptr };
		return;
	}

	while (b->next != nullptr)
	{
		b = b->next;
	}
	b->next = new Liczby{ x, nullptr };
}

void wypisz(Liczby* &head)
{
	auto a = head;
	while (a != nullptr)
	{
		cout << a->liczba << endl;
		a = a->next;
	}
}




int main()
{
	/* ifstream plik_liczby("numbers.txt");
	while (!plik_liczby)
	{
		cout << "Nie ma takiego pliku." << endl;
		exit(0);
	} */

	Liczby*head = nullptr;
	fstream plik_liczby("numbers.txt");
	while (!plik_liczby)
	{
		cout << "Nie ma takiego pliku." << endl;
		exit(0);
	}

	int x;
	while (plik_liczby)        //void dodaj
	{
		plik_liczby >> x;
		dodaj(x, head);
	}


	wypisz(head);


	system("pause");
	return 0;

}