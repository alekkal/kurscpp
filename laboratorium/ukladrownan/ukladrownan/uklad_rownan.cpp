#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	double a, b, c;
	double d, e, f;
	double W, Wx, Wy;
	double x, y;
	cout << "Pierwsze rownanie:" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "Drugie rownanie:" << endl;
	cout << "d=";
	cin >> d;
	cout << "e=";
	cin >> e;
	cout << "f=";
	cin >> f;

	W = a*e - b*d;
	Wx = c*e - b*f;
	Wy = a*f - c*d;

	
	if (W != 0)
	{
		cout << "x=" << Wx / W << endl;
		cout << "y=" << Wy / W << endl;
	}
	else
		if ((Wx == 0) && (Wx == 0))
		cout << "Nieskonczenie wiele rozwiazan" << endl;
		else
		cout << "Uklad sprzeczny" << endl;
	system("pause");
		return 0;
}