#include <iostream>

using namespace std;

//zadanie z dodawaniem dwoch zmiennych typu double

int suma(double a, double b)
{
	a += b;
	return a;
}


//zadanie z zamian� dw�ch zmiennych

void zamiana(int &x)
{
	x += x;
}


int main(int argc, char**argv)
{
	int wybor;

	while (true)
	{
		cout << endl << "LISTA ZADAN - FUNKCJE" << endl;
		cout << "********************************" << endl;
		cout << "1. dodawanie dwoch zmiennych typu double." << endl;
		cout << "2. zamiana zmiennych." << endl;
		cout << "3. tablica wypelniona losowymi liczbami." << endl;
		cout << "4. liczba typu double podniesiona do potegi naturalnej." << endl;
		cout << "5. zwracanie odleglosci euklidesowej miedzy dwoma punktami w przestrzeni dwuwymiarowej." << endl;
		cout << "6. rozwiazywanie ukladow rownan liniowych (zwrot x i y przez referencje." << endl;
		cout << "7. wyswietlanie tablicy o liczbie elementow rownej n od konca bez uzycia petli." << endl;
		cout << "8 obliczanie n-tego wyrazu ciagu Fibonacciego (wersja rekurencyjna)." << endl;
		cout << "9. obliczanie n-tego wyrazu ciagu Fibonacciego (wersja iteracyjna." << endl;

		cout << "Prosze wybrac numer zadania: ";
		cin >> wybor;

		switch (wybor)
		{
		case 1:

			double a, b;

			cout << "Podaj pierwsza liczbe: ";
			cin >> a;
			cout << "Podaj druga liczbe: ";
			cin >> b;

			cout << "Suma: " << suma(a, b) << endl;

			break;									//gdzie� tu jest b��d (??)

		case 2:

			int z;

			cout << "Podaj liczbe: ";
			cin >> z;
			zamiana(z);

			cout << "Liczba po zamianie: " << z << endl;

			break;
		}















	}









	system("pause");
	return 0;

}