#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include<string>

using namespace std;


struct drzewo
{
	int val;
	drzewo* left;
	drzewo* right;
};

void dodaj(drzewo*& root, int val)
{
	if (!root)
		root = new drzewo{ val, nullptr, nullptr };
	else if (val < root->val)
		dodaj(root->left, val);
	else
		dodaj(root->right, val);
}

void inorder(drzewo*& root)
{
	drzewo* pom = root;
	if (pom)
	{
		inorder(pom->left);
		cout << pom->val << " ";
		inorder(pom->right);
	}
}
void zapisz_do_drzewa(drzewo*& root, const string& dane)
{
	ifstream inne_dane(dane);
		if (!inne_dane)
			cout << "Nie mozna otworzyc pliku." << endl;

		int liczba;

		while (inne_dane >> liczba)
		{
			dodaj(root, liczba);
		}
	
}

void skopiuj(const string& wynik, const string& kopia)
{

	string linia;
	ifstream plik_wyniki("wyniki.txt");
		if (!plik_wyniki)
			cout << "Nie mozna otworzyc pliku." << endl;

	ofstream kopiowanie(kopia);
		if (!kopiowanie)
			cout << "Nie mozna otworzyc pliku." << endl;
		
		while (!plik_wyniki.eof())
		{
			getline(plik_wyniki, linia);
			kopiowanie << linia<<endl;
		}
	
		kopiowanie.close();
		plik_wyniki.close();
		return;
}

int main()
{
	double liczba1;
	double liczba2;
	int wybor;

	cout << "wprowadz pierwsza liczbe: ";
	cin >> liczba1;
	cout << endl << "wprowadz druga liczba: ";
	cin >> liczba2;

	cout << endl << endl << "MENU" << endl;
	cout << "***************************************" << endl;
	cout << "1. Dodawanie." << endl;
	cout << "2. Odejmowanie." << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4. Dzielenie." << endl;
	cout << "Wybierz co chcesz zrobic: ";
	cin >> wybor;

	ofstream plik_wyniki("wyniki.txt", ios::app);
	if (!plik_wyniki)
		cout << "Nie mozna otworzyc pliku." << endl;

	switch (wybor)
	{
	case 1: cout << setprecision(2) << liczba1 + liczba2 << endl;
		plik_wyniki << setprecision(2) << liczba1 + liczba2<<endl;
		break;
	case 2: cout << setprecision(2) << liczba1 - liczba2 << endl;
		plik_wyniki << setprecision(2) << liczba1 - liczba2<<endl;
		break;
	case 3: cout << setprecision(2) << liczba1*liczba2 << endl;
		plik_wyniki << setprecision(2) << liczba1*liczba2<<endl;
		break;

	case 4: cout << setprecision(2) << liczba1 / liczba2 << endl;
		plik_wyniki << setprecision(2) << liczba1 / liczba2<<endl;
		break;
	}

	skopiuj("kopia.txt", "wyniki.txt");
	plik_wyniki.close();

	drzewo* root = nullptr;

	zapisz_do_drzewa(root,"dane.txt");
	inorder(root);


	return 0;
}