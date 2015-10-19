#include <iostream>
using namespace std;

#define ZAD4
int main()
{
#ifdef ZAD1
	int n;
	cout << "Podaj liczbe" << endl;
	cin >> n;
	for (int i=1; i <= n; i++)
	{
		cout << i << endl;
	}
#endif


#ifdef ZAD2
	int start, stop, dzielnik;
		cout << "Podaj start" << endl;
		cin >> start;
		cout << "Podaj stop" << endl;
		cin >> stop;
		cout << "Podaj dzielnik" << endl;
		cin >> dzielnik;
		
		for (int i = start; i < stop; i++)
		{
			cout << i << endl;
		}
#endif
#ifdef ZAD3
		int podstawa, wykladnik;
			cout << "Podaj podstawa" << endl;
			cin >> podstawa;
			cout << "Podaj wykladnik" << endl;
			cin >> wykladnik;
			int wynik
			wynik = podstawa

				for (int i = 3; i <= wykladnik; i++)
				{
					wynik = wynik*podstawa;
				}
#endif

#ifdef ZAD4
			int liczba;
				cout << "Podaj liczba" << endl;
				cin >> liczba;
				for (int i = 2; i <= sqrt(liczba); i++)
			{
				if (liczba%i == 0)
				{
						cout << "Liczba pierwsza" << endl;
				}
				else
				{
						cout << "To nie jest liczba pierwsza" << endl;
				}
#endif








	system("pause");
	return 0;
}