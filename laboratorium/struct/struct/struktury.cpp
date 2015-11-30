#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

struct Complex
{
	double Rez;
	double Imz;
};

//Zadanie 1 - wypisz liczbê zespolon¹

void wypisz_zespolona(Complex x)
{
	cout << x.Rez << "+" << x.Imz << "i" << endl;
}

//Zadanie 2 - utwórz liczbê zespolon¹

Complex utworz_zespolona(double &a, double &b)
{
	Complex x = { a,b };
	return x;
}

//Zadanie 3 - dodaj liczby zespolone

Complex dodaj_zespolona(Complex &x, Complex &y)
{
	Complex z = { x.Rez + y.Rez, x.Imz + y.Imz };
	return z;
}

//Zadanie 4 - porownaj liczby zespolone

Complex porownanie_zespolona(Complex &x, Complex &y)
{
	double p1 = sqrt(pow(x.Rez, 2) + pow(x.Imz, 2));
	double p2 = sqrt(pow(y.Rez, 2) + pow(y.Imz, 2));

	if (p1 < p2)
		return y;
	else
		return x;
}

//Daty

struct Date
{
	unsigned int year;
	unsigned int month;
	unsigned int day;
};

//Zadanie 5 - sprawdzenie czy podana data zawiera rok przystêpny

void r_przyst(unsigned int &a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		cout << "To jest rok przystepny"<<endl;
	else
		cout << "To nie jest rok przystepny"<<endl;
}

//Zadanie 6 - porównanie dwóch dat

Date porownanie(Date data1, Date data2)
{
	if (data1.year > data2.year)
		return data1;
	else if (data1.year < data2.year)
		return data2;
	else
	{
		if (data1.month > data2.month)
			return data1;
		else if (data1.month < data2.month)
			return data2;
		else
		{
			if (data1.day > data2.day)
				return data1;
			else if (data1.day < data2.day)
				return data2;
			else
			{
				cout << "Obie daty sa jednakowe."<<endl;
				return data1;
			}

		}
	}




}

//Zadanie 7 - sprawdzenie czy data jest prawid³owa

void poprawnosc(Date data1)
{
	if (data1.month > 12)
		cout << "Podana data nie istnieje."<<endl;
	else
	{
		switch (data1.month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if (data1.day > 31)
				cout << "Podana data nie istnieje."<<endl;
			else
				cout << "Podana data jest prawidlowa."<<endl;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if (data1.day > 30)
				cout << "Podana data nie istnieje."<<endl;
			else
				cout << "Podana data jest prawidlowa."<<endl;

			break;
		}
		case 2: //Sprawdzamy poprawnosc dla lutego
		{
			if ((data1.year % 4 == 0 && data1.year % 100 != 0) || data1.year % 400 == 0)
			{
				if (data1.day > 29)
					cout << "Podana data nie istnieje."<<endl;
				else
					cout << "Podana data jest prawidlowa."<<endl;
				break;
			}
			else
			{
				if (data1.day > 28)
					cout << "Podana data nie istnieje."<<endl;
				else
					cout << "Podana data jest prawidlowa."<<endl;
				break;
			}
		}
		default:
			cout << "Podana data jest prawidlowa."<<endl;
		}
	}
}


int main()
{
	int zad = 0;

	while (true)
	{
		cout << endl << "ZADANIA" << endl;
		cout << "***************" << endl;
		cout << "1. Wypisanie liczby zespolonej. " << endl;
		cout << "2. Stworzenie liczby zespolonej. " << endl;
		cout << "3. Dodawanie liczb zespolonych. " << endl;
		cout << "4. Porownanie liczb zespolonych. " << endl;
		cout << "5. Sprawdzenie czy podana data zawiera rok przystepny. " << endl;
		cout << "6. Porownanie dwoch dat. " << endl;
		cout << "7. Sprawdzenie czy data jest prawidlowa. " << endl;
		cout << "8. Koniec programu. " << endl << endl;

		cout << "Podaj numer zadania: ";
		cin >> zad;

		switch (zad)
		{

		case 1:
		{
			double a;
			double b;
			cout << "Czesc rzeczywista liczby zespolonej: ";
			cin >> a;
			cout << "Czesc urojona liczby zespolonej: ";
			cin >> b;
			Complex x = { a,b };
			wypisz_zespolona(x);

			break;

		}

		case 2:
		{
			double a;
			double b;
			cout << "Czesc rzeczywista liczby zespolonej: ";
			cin >> a;
			cout << "Czesc urojona liczby zespolonej: ";
			cin >> b;
			utworz_zespolona(a, b);

			break;
		}

		case 3:
		{
			double a;
			double b;
			double c;
			double d;
			cout << "Czesc rzeczywista pierwszej liczby zespolonej: ";
			cin >> a;
			cout << "Czesc urojona pierwszej liczby zespolonej: ";
			cin >> b;
			cout << "Czesc rzeczywista drugiej liczby zespolonej: ";
			cin >> c;
			cout << "Czesc urojona drugiej liczby zespolonej: ";
			cin >> d;
			Complex x = { a, b };
			Complex y = { c, d };
			dodaj_zespolona(x, y);

			break;
		}

		case 4:
		{
			double a;
			double b;
			double c;
			double d;
			cout << "Czesc rzeczywista pierwszej liczby zespolonej: ";
			cin >> a;
			cout << "Czesc urojona pierwszej liczby zespolonej: ";
			cin >> b;
			cout << "Czesc rzeczywista drugiej liczby zespolonej: ";
			cin >> c;
			cout << "Czesc urojona drugiej liczby zespolonej: ";
			cin >> d;


			Complex x = { a, b };
			Complex y = { c, d };

			porownanie_zespolona(x, y);

			break;
		}

		case 5:
		{
			unsigned int a;
			unsigned int b;
			unsigned int c;
			cout << "Podaj rok: ";
			cin >> a;
			cout << "Podaj miesiac: ";
			cin >> b;
			cout << "Podaj dzien: ";
			cin >> c;

			Date data = { a, b, c };
			
			data.year = a;

			r_przyst(a);

			break;
		}

		case 6:
		{
			unsigned int a, b, c, d, e, f;
			cout << "Podaj pierwszy rok: ";
			cin >> a;
			cout << "Podaj pierwszy miesiac: ";
			cin >> b;
			cout << "Podaj pierwszy dzien: ";
			cin >> c;
			cout << "Podaj drugi rok: ";
			cin >> d;
			cout << "Podaj drugi miesiac: ";
			cin >> e;
			cout << "Podaj drugi dzien: ";
			cin >> f;

			Date data1 = { a, b, c };
			Date data2 = { d, e, f };

			porownanie(data1, data2);

			break;
		}

		case 7:
		{
			unsigned int a, b, c, d, e, f;
			cout << "Podaj rok: ";
			cin >> a;
			cout << "Podaj miesiac: ";
			cin >> b;
			cout << "Podaj dzien: ";
			cin >> c;

			Date data1 = { a, b, c };
			poprawnosc(data1);


			break;
		}

		case 8:

			exit(0);

		default:

			cout << "Nie ma takiego numeru zadania" << endl << endl;


		}



		getchar(); getchar();
		system("cls");
	}
	
	system("pause");
	return 0;
}