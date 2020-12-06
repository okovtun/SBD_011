#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//Заполнение массива случайными числами:
	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)
		{
			cout << "User lox :-(" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (minRand == maxRand);
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Сортировка:
	for (int i = 0; i < n; i++)	//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение
	{
		for (int j = i+1; j < n; j++)	//Счетчик 'j' перебирает остальные элементы, в поисках минимального значения
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//Вывод отсортированного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}