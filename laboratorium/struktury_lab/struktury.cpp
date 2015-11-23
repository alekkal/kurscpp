/* #include <iostream>
#include <string>

using namespace std;

union U
{
	int a;
	int b;
};


struct Inna
{
	int a, b;
};
struct Person
{
	string Name;
	int wiek;
	double oceny[20];
	Inna a;
};

enum GameOptions{ NewGame=5, Save=10, Exit};

enum class GameOptions { NewGame = 5, Save = 10, Exit };

int main()
{
	Person persons[200];
	Person p = { "Ala", 24 };
	/*p.Name = "Ala";
	p.wiek = 24; */
	/* cout << p.a.a;
	Person *w_p = &p;
	w_p->a;

	Person nowa=p;

	//if(nowa==p)	//tak nie mozna

	if (nowa.Name == p.Name)	//tak mozna








	int opcja = 0;
	//uzytkownik podaje opcje

	switch (opcja)
	{
	case 1: NewGame;
		//
		break;
	case 2:

	}



	system("pause");
	return 0;

} ********************************************************************/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Complex
{
	double re, im;
};

struct Date
{
	int year, month,day;

};

//Zadanie 3: sprawdzenie czy rok jest przystêpny

void przystepny(int rok)
{
	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
		cout << "Rok " << rok << " jest przestepny." << endl;
	else
		cout << "Rok " << rok << "nie jest przestepny." << endl;
}


int main()
{
	//Zadanie 3: sprawdzenie czy rok jest przystêpny

	cout << "Podaj rok: ";
	
	Date rok, m, d, y1, m1, d1;
	cin >> rok.year;
	cin >> m.month;
	cin >> d.day;
	przystepny(rok.year);
	










		system("pause");
			return 0;

}