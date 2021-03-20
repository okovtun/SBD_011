#include<iostream>
using namespace std;

#define ROMAN_PERMYAKOV
#define TATIANA

void main()
{
	setlocale(LC_ALL, "");
#ifdef ROMAN_PERMYAKOV
	cout << sizeof(int*) << endl;
	int a = 2;
	int* pa = &a;
	cout << pa << endl;
#endif // ROMAN_PERMYAKOV

#ifdef TATIANA
	for (int i = 0; i < 5, i < 10; i++)
	{
		//group-of-statements;
		cout << i << "\t";
	}
	if (2 == 3)
	{

	}
#endif
}