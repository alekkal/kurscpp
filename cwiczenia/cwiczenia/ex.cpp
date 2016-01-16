#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int znajdz_najmniejszy_element(int tab[], int rozmiar, int indeks);
void zamien(int tab[], int pierwszy_indeks, int drugi_indeks);

void sortuj(int tab[], int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		int indeks = znajdz_najmniejszy_element(tab, rozmiar, i);
		switch (tab, i, indeks);
	}
}

int znajdz_najmniejszy_element(int tab[], int rozmiar, int indeks)
{
	int indeks_najmniejszej_wartosci = indeks;

	for (int i = indeks + 1; 1 < rozmiar; i++)
	{
		if (tab[i] < tab[indeks_najmniejszej_wartosci])
		{
			indeks_najmniejszej_wartosci = i;
		}
	}
	return indeks_najmniejszej_wartosci;
}

void zamien(int tab[], int pierwszy_indeks, int drugi_indeks)
{
	int tymczasowa = tab[pierwszy_indeks];
	tab[pierwszy_indeks] = tab[drugi_indeks];
	tab[drugi_indeks] = tymczasowa;
}

//funkcja wyœwietlaj¹ca tablicê przed i po sortowaniu

void wyswietl(int tab[], int rozmiar)
{
	cout << "{";
	for (int i = 0; i < rozmiar; i++)
	{
		if (i != 0)			//kod ten s³u¿y do czytelnego formatowania list, kod sprawdza,
		{					//czy jesteœmy ju¿ poza pierwszym elementem, i jeœli tak, do³¹cza przecinek
			cout << ",";
		}

		cout << tab[i];
	}

	cout << "}";
}

int main()
{
	int tab[20];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 100;
	}

	cout << "Tablica wyjsciowa: ";
	wyswietl(tab, 20);
	cout << endl;
	sortuj(tab, 10);
	cout << "Tablica posortowana: ";
	wyswietl(tab, 20);
	cout << endl;

	system("pause");
	return 0;
}