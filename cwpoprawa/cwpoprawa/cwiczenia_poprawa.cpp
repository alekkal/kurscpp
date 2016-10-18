#include <iostream>

using namespace std;

//int foo(int, int);

/* struct Elem
{
	int val;
	Elem* next;
};

void add(Elem**head, int val)
{
	Elem* tmp = new Elem;
	tmp->val = val;
	tmp->next = *head;
	*head = tmp;
}

void print1(Elem* e)
{
	if (e)
	{
		print1(e->next);
		cout << e->val << " ";
		
	}
}

void print2(Elem* e)
{
	if (e)
	{
		cout << e->val << " ";
			print2(e->next);
	}
}

void print3(Elem* e)
{
	while (e)
	{
		cout << e->val << " ";
		e = e->next;
	}
}
	*/
int main(int argc, char**argv)
{
/*	Elem* head = NULL;
	add(&head, 7);
	add(&head, 5);
	add(&head, 6);
	print1(head);
	print2(head);
	print3(head);
	
*/
	
	
	
	
	
#define N=3
	int tab[N][N] = { {0} };
	int current = 0;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			if (++current % 2)
				tab[i][j] = current;

	/* int a = 1, b = 2, c = 4;
	a = foo(b, c);
	cout << a << b << c; // 3 2 4
}
int foo(int b, int c)
{
	b = b * 2; // 2=2*2=4
	c = c - 3; // 4=4-3=1
	return (b - c); // 4-1=3=a
}*/



/* int tab1[3][2] = { { 33,93 },{ -103,903 } };
int tab2[3][2] = { 3,5,7,13 };

tab1[0][0] = 1000;
tab2[1][1] = tab1[1][0];
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 2; j++)
	{
		cout << i << " " << j << " :" << tab1[i][j] << " " << endl;;
	}

}
cout << endl;
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 2; j++)
	{
		cout << i << " " << j << " :" << tab2[i][j] << " " << endl;;
	}
}*/
	system("pause");
	return 0;
}