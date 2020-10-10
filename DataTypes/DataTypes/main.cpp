#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TYPES

//Description - описание
#define DESCRIPTION(type, min_value, max_value, umax_value)cout << "Переменная типа "#type" занимает " << sizeof(type) << " Байта памяти, и принимает значения в диапазоне:\n"\
<< "unsigned "#type": " << 0 << "..." << umax_value << endl\
<< "  signed "#type":" << min_value << "..." << max_value << endl

void main()
{
	setlocale(LC_ALL, "Rus");
	//cout << (bool)0.000 << endl;

#ifdef TYPES
	cout << "Переменная типа short занимает ";
	cout << sizeof(short) << " Байта памяти, и принимает значения в диапазоне:\n";
	cout << "unsigned ""short"": " << 0 << "..." << USHRT_MAX << endl;
	cout << "  signed short:" << SHRT_MIN << "..." << SHRT_MAX << endl;

	DESCRIPTION(long long, LLONG_MIN, LLONG_MAX, ULLONG_MAX);
	DESCRIPTION(int, INT_MIN, INT_MAX, UINT_MAX);

	//IA-16:
	int a;

	//IA-32:
	short int b;
	long int c;


	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
#endif // TYPES


	//int a;
	//double cammelCaseStyle;
	/*double price_of_coffee;
	int number_of_cups;
	cout << "Введите стоимость чашки кофе: ";	cin >> price_of_coffee;
	cout << "Введите количество чашек: ";		cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "С Вас: "<< total_price << " р." << endl;
	
	double price;
	double price;
	cout << price;*/

	//Проинициализировать
	//Инициализация - это присвоение началоного значения

	int speed = 0;
	const int MAX_SPEED = 250;

	const double SOME_CONST = .3f;

	cout << typeid('+').name() << endl;
	cout << '+' << endl;
	cout << sizeof("Hello") << endl;
}

/*
----------------------------------
1. Логические типы: bool (Boolean) 1 Byte true false
	true - 1
	false - 0
	
	0 - это false, a true - это все, что НЕ ноль!!!

2. Символьные типы: char (Character - символ)
	Занимает 1 Byte памяти, и содержит ОДИН символ в кодировке ASCII

3. Числовые типы:
	unsigned
	  signed
	------------
	short	2B
	long	4B
	int		2-4B
	long long 8B




	//Identifier - это имя
	1. ABC...Zabc...z0123456789_
	2. 
	3.
----------------------------------
*/