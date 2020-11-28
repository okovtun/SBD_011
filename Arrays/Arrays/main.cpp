#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;	//Количество элементов массива
	int arr[n] = { 3, 5, 8 };
	cout << "Введите значения элементов: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Подсчет суммы элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое:  " << (double)sum / n << endl;
	//		Найти в массиве минимальное и максимальное значение
}