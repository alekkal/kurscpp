#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(int argc, char**argv)
{
	
	double a, b, c;
	double delta, pier;
	double x0, x1, x2,y1,y2;
	double i = sqrt(1);

	cout << "podaj wspolczynniki" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	delta = (b*b) - (4 * a*c);
	cout << "delta wynosi" << endl;
	pier = sqrt(delta);
	if (delta < 0)
	{
		x1 = (-b) / (2 * a); y1 = (sqrt(-delta) / (2 * a));
		x2 = (-b) / (2 * a); y2 = (sqrt(-delta) / (2 * a));
		cout << "x1 =" << x1 << "+" << y1 << "i, " << x2 << "-" << y2 << "i" << endl;
	}
	else if (delta ==0)
	{
		x0 = (-b) / (2 * a);
		cout << "x0";
	}
	else if (delta > 0)
	{
		x1 = (-b - pier) / (2 * a);
		x2 = (-b + pier) / (2 * a);
		cout << "x1 =" << x1 << ", x2 = " << x2;
	}
	system("pause");
	return 0;
}