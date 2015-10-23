#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <math.h>


using namespace std;

#define ZAD6

int main()
{

#ifdef ZAD1
	int n;
	cout << "Podaj liczbe naturalna, wieksza od 1: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << endl;
	}

#endif	


#ifdef ZAD2

	int n;
	cout << "Wybierz jedna liczbe naturalna, wieksza od 1: " << endl;
	cin >> n;
	for (int i = n; i >= 1; i--)
	{
		cout << i << "\n";
	}

#endif


#ifdef ZAD3

	int start, stop, dzielnik;
	cout << "Podaj dwie liczby: " << endl;
	cin >> start >> stop;
	cout << endl;
	cout << "Podaj dzielnik liczb. Wypisze liczby, ktore sa podzielne bez reszty przez ten dzielnik: " << endl;
	cin >> dzielnik;
	for (int i = start; i <= stop; i++)
	{
		if (i%dzielnik == 0)
		{
			cout << i << endl;
		}
	}
#endif

#ifdef ZAD4

	int wykladnik = 0, i = 0;
		double podstawa, wynik = 0;

		cout << "Wprowadz podstawe potegi: " << endl;
		cin >> podstawa;
		cout << "Wprowadz wykladnik potegi: " << endl;
		cin >> wykladnik;
		wynik = 1;
		
		if (wykladnik == 0)
		{
			cout << wynik << endl;
		}

		else
			do 
			{
				i++;
				wynik = wynik*podstawa;
				cout << wynik << endl;
			} while (i < wykladnik);
			
#endif

#ifdef ZAD5

			int wprowadz;

			cout << endl << "Wprowadz liczbe, a sprawdzimy czy jest pierwsza: ";
			cin >> wprowadz;

			bool liczba = false;

			for (int i = 2; i < wprowadz && !liczba; i++)
			{
				if (wprowadz%i == 0)
				{
					liczba = true;
				}
			}

			if (liczba)
			{
				cout << endl << endl << "Liczba nie jest pierwsza."<<endl;
			}
			else
			{
				cout << endl << endl << "Liczba jest pierwsza."<<endl;
			}

#endif

#ifdef ZAD6
			int liczba, strzal=0, ile_prob = 0;
			cout << " Witaj! Pomyslalem sobie liczbe z zakresu 1-100." << endl;
			srand(time(NULL));
			liczba = rand() % 100 + 1;
			cout << liczba << endl;
			while (strzal!=liczba)
			{
				ile_prob++;
				cout << "Zgadnij jaka to liczba. (To twoja "<<ile_prob<<"proba)" << endl;
				cin >> strzal;
				if (strzal == liczba)
					cout << "Gratulacje, wygrales w "<<ile_prob<<"probie" << endl;
				else if (strzal > liczba)
					cout << "To za duzo!" << endl;
				else if (strzal < liczba)
					cout << "To za malo!" << endl;

			}
			getchar(); getchar();
#endif










			/*int wykladnik = 0;
			double podstawa, wynik = 0;

			cout << "Wprowadz podstawe potegi: "<<endl;
			cin >> podstawa;
			cout << "Wprowadz wykladnik potegi: "<<endl;
			cin >> wykladnik;
			wynik = 1;
			for (int i = 1; ; i++)
			{
			if (i >wykladnik)
			{
			break;
			}

			wynik = wynik * podstawa;

			}

			cout << "\n" << wynik << "\n\n\n\n";
			system("pause");
			return 0;*/
			/*int wprowadz;

			cout << endl << "Wprowadz pan liczbe, a sprawdzimy czy jest pierwsza: ";
			cin >> wprowadz;

			bool exit = false;

			for (int i = 2; i < wprowadz && !exit; i++)
			{
			if (wprowadz%i == 0)
			{
			exit = true;
			}
			}

			if (exit)
			{
			cout << endl << endl << "Liczba nie jest pierwsza.";
			}
			else
			{
			cout << endl << endl << "Liczba jest pierwsza.";
			}*/


			/*int strzal, liczba, ile_prob = 0, max_prob = 3;
			cout << "Witaj! Pomyslalem sobie liczbe z zakresu 1-100\n";
			srand(time(NULL));
			liczba = rand() % 100 + 1;
			do
			{
			ile_prob++;

			cout << "Zgadnij jaka (to Twoja " << ile_prob << " proba): ";
			cin >> strzal;

			if (strzal == liczba)
			{
			cout << "\n" << "Udalo sie, wygrywasz w " << ile_prob << " probie!\n\n\n\n";
			}
			else if (strzal < liczba)
			{
			cout << "To za malo\n";
			}
			else if (strzal > liczba)
			{
			cout << "To za duzo\n";
			}
			}
			while (strzal != liczba && ile_prob < max_prob);
			*/


			system("pause");
			return 0;
}