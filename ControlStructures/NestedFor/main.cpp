#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n = 10;
	/*for (int i = 1; i <= n; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)
			{
				cout << " ";
			}
			cout << i << " * ";
			if (j < 10)
				cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}*/

	for (int i = 1; i <= n; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <= n; j++)
		{
			/*if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";*/
			cout.width(5);
			cout << i * j << "\t";
		}
		cout << endl;
	}
}