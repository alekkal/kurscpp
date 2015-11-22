#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

#define ZAD1

int main(int argc, char**argv)

{

#ifdef ZAD1
	string napis;
	cout << "Podaj napis: ";
		cin >> napis;
		cout << napis << endl;
		// Jeœli napisem bêdzie wyra¿enie ze spacj¹ "cin" wyœwietli nam tylko to co jest przed spacj¹


#endif

#ifdef ZAD2

		string napis;
		cout << "Podaj napis: ";
		getline(cin,napis);
		cout << napis << endl;
		// Funkcja "getline" sprawia, ¿e program wyœwietla ca³y napis, a nie tylko czêœæ przed spacj¹

#endif

#ifdef ZAD3 

		string napis;
	

		cout << "Podaj jeden krotki napis: ";
		cin >> napis;

		int dlugosc1 = napis.length();
		cout << dlugosc1 << endl;

		cout << "Podaj jeden dlugi napis: ";
		cin >> napis;

		int dlugosc2 = napis.length();
		cout << dlugosc2 << endl;

		if (dlugosc1 < dlugosc2)
			cout << "Napis pierwszy jest krotszy." << endl;
		else
			cout << "Napis drugi jest krotszy." << endl;


#endif

#ifdef ZAD4
		string wyraz;

		cout << "Podaj wyraz: ";
		cin >> wyraz;
		cout << wyraz << endl;

		int dlugosc = wyraz.length();
		

		for (int i = 0; i < wyraz.length(); i++)
		{
			switch (wyraz[i])
			{
			case 'A': wyraz[i] = 'Z';
				break;
			case 'a': wyraz[i] = 'z';
			}
		}

		cout << wyraz << endl;

		
#endif

#ifdef ZAD5

		string imie, noweimie;
		cout << "Podaj imie i nazwisko: ";
		getline(cin, imie);
		int dlugosc = imie.length();

		int x;

		for (int i = 0; i < dlugosc; i++)
		{
			if (imie[i] == ' ') // w apostrofach jest spacja
			{
				x = i + 1;
			}
		}						//po spacji odliczamy 3 pierwsze litery nazwiska


		noweimie = imie.substr(0, 3);
		cout << noweimie.append(imie, x, 3) << endl;
		

#endif

#ifdef ZAD6

		float x, y;
		int wybor;


		while (true)
		{
			cout << "Podaj pierwsza liczbe: ";
			cin >> x;
			cout << "Podaj druga liczbe: ";
			cin >> y;

			cout << endl << "MENU GLOWNE" << endl;
			cout << "***************" << endl;
			cout << "1. Dodawanie" << endl;
			cout << "2. Odejmowanie" << endl;
			cout << "3. Mnozenie" << endl;
			cout << "4. Dzielenie" << endl;
			cout << "5. Potegowanie" << endl;
			cout << "6. Koniec programu" << endl << endl;

			cout << "Wybierz numer czynnosci: ";
			cin >> wybor;

			switch (wybor)
			{

			case 1:

				cout << "Suma = " << x + y << "." << endl << endl;

				break;


			case 2:

				cout << "Roznica = " << x - y << "." << endl << endl;

				break;


			case 3:

				cout << "Iloczyn = " << x*y << "." << endl << endl;

				break;

			case 4:

				if (y == 0)
					cout << "Nie wolno dzielic przez zero!" << endl << endl;
				else
					cout << "Iloraz = " << x / y << "." << endl << endl;

				break;

			case 5:

				cout << "Wynik potegowania = " << pow(x, y) << "." << endl << endl;

				break;

			case 6:

				exit(0);

			default:

				cout << "Nie ma takiej opcji w MENU." << endl << endl;

			}

			getchar(); getchar();
			system("cls");
		}

#endif

#ifdef ZAD7

		string napis, odwroc, wyrazenie;
		cout << "Podaj napis: ";
		getline(cin, napis);
		cout << napis << endl;

		int dlugnap = napis.length();

		for (int i = 0; i < dlugnap; i++)
		{
			if (napis[i] != ' ')
			{
				wyrazenie += napis[i];
			}
		}

		napis = wyrazenie;
		dlugnap= napis.length();
		for (int i = dlugnap - 1; i >= 0; i--)
		{
			odwroc += napis[i];
		}
		if (odwroc == napis)
		{
			cout << "Napis jest palindromem" << endl << endl;
		}
		else
		{
			cout << "Napis nie jest palindromem" << endl << endl;
		}


#endif



		system("pause");
		return 0;

}