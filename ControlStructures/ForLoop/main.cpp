/*



for(Start; Stop; Step)
{
	group-of-statements;
}




Start - объявление и инициализация счетчика.
Stop  - условие продолжение или завершение цикла
Step  - шаг цикла.

*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;	//Количество итераций
	cout << "Введите колиество итераций: "; cin >> n;
	for (int i = 0;	i < n; i++)
	{
		cout << (char)i << "\t";
	}
	cout << endl;
}