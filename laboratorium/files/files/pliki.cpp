#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Zadanie 1

unsigned long long GetFileSize(const string& file_name)
{

	ifstream plik(file_name, ios::binary);

	if (!plik)
	{
		cout << "Nie mozna otworzyc pliku. ";
		exit(1);
	}

	plik.seekg(0, ios::end);
	int miejsce = plik.tellg();
	plik.close();

	return miejsce;

}

//Zadanie 2

void calculate_statistics(const string& intput_file_name, const string& output_file_name)
{
	ifstream odczyt(intput_file_name);
	if (!odczyt)
	{
		cout << "Nie mozna otworzyc pliku. " << intput_file_name;
		exit(1);
	}

	double liczba;
	double suma = 0;
	double srednia = 0;
	int ile = 0;

	while (odczyt >> liczba)
	{
		cout << liczba << " ";
		ile += 1;
		suma += liczba;
		srednia = suma / ile;
	}
	cout << endl;
	odczyt.close();

	ofstream zapis(output_file_name, ios::app);
	if (!zapis)
	{
		cout << "Nie mozna otworzyc pliku." << output_file_name;
		exit(1);
	}
	zapis << srednia << " ";
	zapis.close();
	return;


}

int main()
{

	//Zadanie 1

	const string file_name = "C:\\visual studio\\rozmiar_pliku.txt";
	cout << "Plik rozmiar_pliku.txt ma rozmiar: " << GetFileSize(file_name) << endl;

	//Zadanie 2

	const string input_file_name = "C:\\visual studio\\liczby_rzeczywiste.txt";
	const string output_file_name = "C:\\visual studio\\srednia.txt";
	calculate_statistics(input_file_name, output_file_name);





	system("pause");
	return 0;

}