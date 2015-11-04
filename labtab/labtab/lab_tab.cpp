#include <iostream>
#include <ctime>

using namespace std;

#define ZAD2

int main(int argc, char**argv)
{
#ifdef ZAD1

	int tab[50];
	srand(time(NULL));
	for (int i = 0; i < 50; i++)
	{
		
		tab[i] = rand() % 50;
		cout << tab[i] << " ";
	}
#endif

#ifdef ZAD2
	const int N = 6;
	int tab[N];
	int min = 100;
	int max;
	srand(time(NULL));

		for (int i = 0; i < N; i++)
		{
			tab[i] = rand() % 20;

			cout << tab[i] << " ";
		}

		for (int i = 0; i < N; ++i)
		{
			if (i <  )
			{
				cout << "Minimalna wartosc: " << endl;
			}
			if (i > )
			{
				cout << "Maksymalna wartosc: " << endl;
			}
		}
		cout << "\n";
		for (int i = 0; i < N; ++i)
		{
			cout << tab[i] << " ";
		}

#endif
	
	
	
	
	
	
	
	system("pause");
	return 0;

}