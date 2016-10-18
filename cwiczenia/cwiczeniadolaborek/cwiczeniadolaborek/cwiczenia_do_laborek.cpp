#include <iostream>


using namespace std;

int main()
{
	int liczba1;
	int liczba2;
	char wybor;

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

	switch (wybor)
	{
	case 1: cout << liczba1 + liczba2 << endl;
	case 2: cout << liczba1 - liczba2 << endl;
	case 3: cout << liczba1*liczba2 << endl;
	case 4: cout << liczba1 / liczba2 << endl;
		
	}



	system("pause");
	return 0;
}