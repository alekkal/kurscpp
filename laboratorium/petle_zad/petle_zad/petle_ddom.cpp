#include <iostream>
#include<time.h>

using namespace std;

int Main()
{
	int strzal, liczba, ile_prob = 0, max_prob = 3;
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
	} while (strzal != liczba && ile_prob < max_prob);


	system("pause");
	return 0;
}
