#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;	//Число, вводимое пользователем
	int reverse_number = 0;	//Число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse_number *= 10;	//Освобждаем место под цифирку
		reverse_number += buffer % 10;	//Берем младшую цифру из числа
		buffer /= 10;	//Убираем младшую цифру из числа
	}
	cout << number << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl;
}