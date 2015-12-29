#include <iostream>

using namespace std;

char pole[3][3];
bool wygrana = 0;
int zwyciezca = 0;
int licznik = 0;
char kolumna = ' ';
int wiersz = 0;
int kolumna_w_int = 0;

void zerowanie_planszy();

void wypisanie_planszy();

void wpisanie_X();

void wpisanie_O();

void sprawdz_warunki_wygranej();

void gra();

int main()
{
	int wybor = 0;

	do
	{
		system("CLS");
		cout << "KOLKO I KRZYZYK!\n";
		cout << "----------------\n";
		cout << "MENU:\n";
		cout << "----------------\n";
		cout << "1.Nowa gra\n";
		cout << "2.Wyjscie\n\n";
		cout << "Co chcesz zrobic? (Wprowadz 1 lub 2): ";
		cin >> wybor;

		switch (wybor)
		{
		case 1:
		{
			gra();
			break;
		}
		case 2:
		{
			cout << "Opuszczanie programu...\n\n";
			break;
		}
		default:
			cout << "Nieprawidlowy wybor, sprobuj ponownie.";
		}



	} while (wybor != 2);



	system("pause");
	return 0;
}

void zerowanie_planszy()
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			pole[i][j] = ' ';
	}
	return;
}

void wypisanie_planszy()
{
	cout << "\t   A   B   C\n";
	cout << "\t1  " << pole[0][0] << " | " << pole[1][0] << " | " << pole[2][0] << endl;
	cout << "\t  -----------\n";
	cout << "\t2  " << pole[0][1] << " | " << pole[1][1] << " | " << pole[2][1] << endl;
	cout << "\t  -----------\n";
	cout << "\t3  " << pole[0][2] << " | " << pole[1][2] << " | " << pole[2][2] << endl;
}

void wpisanie_X()
{
	cin >> kolumna >> wiersz;
	switch (kolumna)
	{
	case 'A':
	{
		kolumna_w_int = 0;
		break;
	}
	case 'B':
	{
		kolumna_w_int = 1;
		break;
	}
	case 'C':
	{
		kolumna_w_int = 2;
		break;
	}
	default:
	{
		cout << "Nieprawidlowy znak kolumny, sprobuj ponownie!\n";
		wpisanie_X();
		return;
	}
	}

	pole[kolumna_w_int][wiersz - 1] = 'X';
	return;
}

void wpisanie_O()
{
	cin >> kolumna >> wiersz;
	switch (kolumna)
	{
	case 'A':
	{
		kolumna_w_int = 0;
		break;
	}
	case 'B':
	{
		kolumna_w_int = 1;
		break;
	}
	case 'C':
	{
		kolumna_w_int = 2;
		break;
	}
	default:
	{
		cout << "Nieprawidlowy znak kolumny, sprobuj ponownie!\n";
		wpisanie_O();
		return;
	}
	}

	pole[kolumna_w_int][wiersz - 1] = 'O';
	return;
}

void sprawdz_warunki_wygranej()
{
	licznik = 0;

	for (int i = 0; i < 3; ++i)
	{
		if ((pole[0][i] == pole[1][i] == pole[2][i]) && (pole[0][i] == 88 || pole[0][i] == 79))
		{
			if (pole[0][i] == 88)
			{
				wygrana = 1;
				zwyciezca = 1;
				return;
			}
			if (pole[0][i] == 79)
			{
				wygrana = 1;
				zwyciezca = 2;
				return;
			}
		}
		else if ((pole[i][0] == pole[i][1] == pole[i][2]) && pole[0][0] != 32)
		{
			if (pole[i][0] == 88)
			{
				wygrana = 1;
				zwyciezca = 1;
				return;
			}
			if (pole[i][0] == 79)
			{
				wygrana = 1;
				zwyciezca = 2;
				return;
			}
		}
		for (int j = 0; j < 3; ++j)
		{
			if (pole[i][j] != 32)
				licznik++;
		}

	}

	if ((pole[0][0] == pole[1][1] == pole[2][2]) && pole[0][0] != 32)
	{
		if (pole[0][0] == 88)
		{
			wygrana = 1;
			zwyciezca = 1;
			return;
		}
		if (pole[0][0] == 79)
		{
			wygrana = 1;
			zwyciezca = 2;
			return;
		}
	}
	else if ((pole[2][0] == pole[1][1] == pole[0][2]) && pole[2][0] != 32)
	{
		if (pole[2][0] == 88)
		{
			wygrana = 1;
			zwyciezca = 1;
			return;
		}
		if (pole[2][0] == 79)
		{
			wygrana = 1;
			zwyciezca = 2;
			return;
		}
	}
	else if (licznik == 9)
	{
		wygrana = 1;
		zwyciezca = 0;
		return;
	}
	return;
}

void gra()
{
	zerowanie_planszy();
	system("CLS");
	wypisanie_planszy();

	do
	{
		system("CLS");
		wypisanie_planszy();
		cout << "Tura gracza 1. Wybierz kolumne i wiersz, gdzie chcesz umiescic X (na przyklad A1, B2 itp): ";
		wpisanie_X();
		sprawdz_warunki_wygranej();
		if (wygrana)
			break;

		system("CLS");
		wypisanie_planszy();
		cout << "Tura gracza 2. Wybierz kolumne i wiersz, gdzie chcesz umiescic O (na przyklad A1, B2 itp): ";
		wpisanie_O();
		sprawdz_warunki_wygranej();
		if (wygrana)
			break;

	} while (1);

	system("CLS");
	wypisanie_planszy();

	switch (zwyciezca)
	{
	case 0:
	{
		cout << "Remis! Powracanie do menu...";
		break;
	}
	case 1:
	{
		cout << "Wygraly krzyzyki, zwyciezca jest gracz 1! Powracanie do menu...";
		break;
	}
	case 2:
	{
		cout << "Wygraly kolka, zwyciezca jest gracz 2! Powracanie do menu...";
		break;
	}
	}

	cout << "\nWcisnij dowolny klawisz";
	cin.ignore();
	cin.get();
	return;
}