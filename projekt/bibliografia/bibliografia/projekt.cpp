#include <iostream>
#include <fstream>

using namespace std;


void otwieranie_pliku_etykiet(const string& plik_etykiety)
{
	ifstream plik_etykiety("etykiety.txt");

	if (!plik_etykiety)
	{
		cout << "Nie ma takiego pliku." << endl;
		exit(1);
	}

}

struct etykiety_ksiazek
{
	string etykiety;
	etykiety_ksiazek* lewa;
	etykiety_ksiazek* prawa;
};

struct lista
{
	lista* nastepny;
	lista* poprzedni;
	etykiety_ksiazek* etykiety;
};

int main(int argc, char**argv)
{

	const string plik_etykiety = "etykiety.txt";
}