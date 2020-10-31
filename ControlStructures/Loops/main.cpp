//Loops
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//int n;	//Количество итераций
	//int i = 0; //Счетчик цикла
	//cout << "Введите количество итераций: ";
	//cin >> n;
	//while (i < n)
	//{
	//	cout << i++ << " Hello World!\n";
	//}

	char key;
	do
	{
		key = _getch();	//ASCII
		cout << (int)key << "\t" << key << endl;
	} while (true);
}