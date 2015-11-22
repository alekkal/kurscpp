#include <iostream>
#include <cstdlib>


using namespace std;

#define ZAD1

//ZAD1

double dodaj(double x, double y)
{
	x += y;
		return x;
}

//ZAD2
//ZAD3
//ZAD4
//ZAD5
//ZAD6
//ZAD7
//ZAD8

int Fib(int n)

{
	if (n == 0) return 0;
	if (n == 1) return 1;
	else
		return Fib(n - 2) + Fib(n - 1);
}

//ZAD9

int Fib1(int n)
{
	int x, y;
	if (n == 0) return 0;

	x = 0; y = 1;
	for (int i = 0; i < (n - 1); i++)
	{
		swap(x, y);
		y += x;
	}
	return y;

}


int main()

{

#ifdef ZAD1

	double x, y;
	cout << "Podaj liczbe x: ";
	cin >> x;
	cout << "Podaj liczbe y: ";
	cin >> y;

	cout << "Suma = " << dodaj(x,y) << "." << endl;
	

#endif

#ifdef ZAD2





#endif

#ifdef ZAD8 // ci¹g Fibonacciego (rekurencyjny)

	int n;

	cout << "Podaj numer wyrazu ciagu Fibonacciego do obliczenia:" << endl;
	cin >> n;

	cout << Fib(n) << endl;

#endif

#ifdef ZAD9 // ci¹g Fibonacciego (iteracyjny)

	int n;

	cout << "Podaj wyraz ciagu Fibonacciego do obliczenia:" << endl;
	cin >> n;

	cout << Fib1(n) << endl;

#endif


	system("pause");
	return 0;

}