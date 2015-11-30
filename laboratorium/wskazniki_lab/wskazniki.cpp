/* #include <iostream>

using namespace std;

int main(int argc, char**argv)
{
	int** t2d = new int*[10];
	for (int i = 0; i < 10; ++1)
		t2d[i] = new int[100];
	for (int i = 0; i < 10; ++1)
		delete[] t2d[i];

	delete[] t2d; //zwalnianie tablicy wskaznikow

	int c;
	cin >> c;
	int* tab = new int[c];

	delete[] tab; //zwalnianie tablicy

	int tab[100];

	cout << *tab; // wyswietla pierwszy element
	cout << tab[99]; // *(tab+99)
	cout << 99[tab]; // 



	int* aaa = nullptr;   //NULL
	int* pp = new int; // ta * okresla zmienna typu wskaznikowego

	*pp = 55; //ta * to dereferencja

	delete pp;

	int a = 5;
	int *p = &a; 
	int **q = &p;
	*p = 7;

	cout << a;
	cout << p;
	cout << p;
	cout << **q;





} */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Person
{
	string imie;
	int wiek;
};

void osoby(string imie1)
{

	string imie[5];
	int wiek[5];
	int i = 0;
	int k;
	float suma = 0, srednia;
	ifstream odczyt(imie1);

	while (odczyt >> imie[i], odczyt>>wiek[i])
	{
		cout << imie[i] << " " << wiek[i] << endl;
		suma += wiek[i];
		i++;
		k = 1;
	}
}






int main()
{
	osoby("lista_osob.txt");





	system("pause");
	return 0;

}
