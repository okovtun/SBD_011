#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");//¬ключает кирилицу

	//5! = 1*2*3*4*5 = 120;
	int n;	//„исло, дл€ которого вычисл€етс€ факториал
	double f = 1;	//‘акториал
	cout << "¬ведите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;

	//double b, s, g = 1;
	//cout << "введите число"; cin >> b;
	//cout << "степень числа"; cin >> s;
	//if (s < 0)
	//{
	//	b = 1 / b;
	//	s = -s;
	//}
	//for (int i = 1; i <= s; i = i++)
	//{
	//	//g = g * b;
	//	g *= b;
	//}
	//cout << "степень" << g << endl;

	//cout << "ASCII-таблица по умолчанию:\n";
	//setlocale(LC_ALL, "C");//—брасывает кодировку
	//for (int i = 0; i < 256; i++)
	//{
	//	if (i % 16 == 0)cout << endl;
	//	cout /*<< i << " " */<< (char)i << " ";
	//}
	//cout << endl;
}
