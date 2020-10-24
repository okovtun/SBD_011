#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	/*int temperature;
	cout << "Введите температуру воздуха: ";
	cin >> temperature;*/

	/*if (temperature > 10 && temperature <=25)
	{
		cout << "На улице тепло" << endl;
	}
	else if(temperature<=10)
	{
		cout << "На улице холодно" << endl;
	}
	else
	{
		cout << "Вы на другой планете!" << endl;
	}*/

	/*if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы в пустыне" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else
	{
		cout << "Холодно" << endl;
	}*/
	
	/*
	
	if (Condition1)
	{
		....;
		code1;
		....;
	}
	else if(Condition2)
	{
		....;
		code2;
		....;
	}
	else if(Condition3)
	{
		...;
		code3;
		....;
	}
	........
	........
	........
	else if(ConditionN)
	{
		....;
		codeN;
		...;
	}
	else
	{
		....;
		default code;
		....;
	}
	


	Condition - это условие.
	Условие - это сравнение.*/


	char key;
	cout << "Вы согласны? (y/n)"; cin >> key;
	if (key == 'y')	cout << "Yes" << endl;
	else if (key == 'n')	cout << "No" << endl;
	else cout << "I don't know" << endl;

	//LOOP - это управляющая структура, 
	//которая многократно выполняет определенный код.
}

/*
-------------------------------

while - Цикл с предусловием
do...while - цикл с постусловием
for - цикл на заданное число итераций

-------------------------------
*/