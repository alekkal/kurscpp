#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//zad1

unsigned long long GetFileSize(const string& nazwapliku);









int main(int argc, char**argv)
{
	ifstream nazwapliku("nazwapliku.txt");
	if (!nazwapliku.is_open())
	{
		cout << "Pliku nie da sie otworzyc." << endl;
		exit(1);
	}







	system("pause");
	return 0;
}

/* 

#include <iostream>
#include <fstream>
#include <string>



using namespace std;







int main(int argc, char**argv)

{
	const string name = ("liczby.txt");
	int tab[] = { 1,2,3,4,5 };

	ofstream plik("liczby.txt");
	if (!plik)
	{
		cout << "nie idzie otworzyc\n";
		exit(1);
	}
	int e;
	for (auto e : tab);
	plik << e;

	plik.close();

	ifstream inplik(name);
	if (!inplik)
	{
		cout << "cannot open inplik\n";
		exit(1);
	}
	int tab2[5];
	for (int i = 0; i < 5; ++i)
	{
		inplik >> tab2[i];
	}

	int aaa = 5;


	ofstream plik("nazwa.bin", ios::binary);

	if (!plik)
	{
		///
	}

	//char tab[100];
	//plik.write(tab, 100);

	int pozycja = plik.tellg();
	plik._seekbeg(10, ios::cur);

	*/




}
