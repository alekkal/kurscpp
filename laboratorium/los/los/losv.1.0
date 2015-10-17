#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int liczba, strzal;
	cout << "Witaj! Pomyslalem sobie liczbe z zakresu 1-5."<< endl;
	srand(time(NULL)); 
	strzal=rand()%5+1;
	cin >> liczba;
	if (liczba == strzal)
	{
		cout << "Gratulacje, wygrales!" << endl;
	}
	else if (liczba < strzal)
	{
		cout << "To za malo!" << endl;
	}
	else if (liczba > strzal)
	{
		cout << "To za duzo!" << endl;
	}

	system("pause");
	return 0;
}