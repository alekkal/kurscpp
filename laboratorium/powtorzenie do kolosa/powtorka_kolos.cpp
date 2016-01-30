#include<iostream>
using namespace std;


using uint32 = unsigned int;
char get_bit(uint32 l, int pos)
{
	return l >> pos & 1;
}

uint32 set_bit(uint32 l, int pos)
{
	return(1u << pos) | l;
}

uint32 reset_bit(uint32 l, int pos)
{
	uint32 a = 1;

}



int main()
{
	char a = 3; 
	char b = 1;
	char c = 48;
	cout << c; // wyswietli sie 0, bo w ASCI 48 to 0


	a >> 2; // przesuniêcie bitowe w prawo o 2, wyjdzie 0
	(a >> 2) << 2; //te¿ bêdzie 0

		cout << (int)c;
	static_cast<int>(c); // 

	int x = 5;
	int z = 2;
	float x = a / b;
	(float) a / b;










	system("pause");
	return 0;
}