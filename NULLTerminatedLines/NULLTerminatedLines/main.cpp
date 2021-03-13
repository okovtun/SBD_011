#include<iostream>
#include<Windows.h>
using namespace std;

void InputLine(char str[], const int n);
int StrLen(char str[]);	//Возвращает размер строки
void to_lower(char str[]);
void shrink(char str[]);//Удаляет лишние пробелы из предложения
void remove_symbol(char str[], char symbol);
bool is_palindrome(char str[]);

bool is_int_number(char str[]);	//Проверяет, является ли строка целым числом
int  to_int_numer(char str[]);  //Возвращает значение десятичного числа, хранящегося в строке

bool is_bin_number(char str[]);
int  bin_to_dec(char str[]);

void main()
{
	setlocale(LC_ALL, "Russian");
	'\0';//ASCII-символ с кодом 0.
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;
	cout << sizeof("Hello") << endl;*/

	const int n = 256;
	char str[n] = "";
	cout << (int)'0' << endl;
	cout << "Введите строку: ";
	InputLine(str, n);
	cout << str << endl;//CP866
	//cout << "Длина введенной строки: " << StrLen(str) << " символов" << endl;
	/*shrink(str);
	*/
	//cout << "Строка "<< (is_palindrome(str) ? "" : "НЕ ") << "является палиндромом!"<< endl;
	//cout << "Строка " << (is_int_number(str) ? "" : "НЕ ") << "является числом!" << endl;
	//cout << str << endl;
	//cout << "Значение введенного числа: " << to_int_numer(str)*2 << endl;


	cout << "Строка " << (is_bin_number(str) ? "" : "НЕ ") << "является двоичным числом!" << endl;
	cout << str << "(bin) = " << bin_to_dec(str) << "(dec)" << endl;
}

void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, n);//CP1251
	SetConsoleCP(866);
}

int StrLen(char str[])
{
	int i = 0;
	//for (; str[i]; i++);
	while (str[i])i++;
	return i;
}
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
}
void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == 0)) || str[0] == ' ')
		{
			for (int j = i; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
			i--;
		}
	}
}
void remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
			i--;
		}
	}
}

bool is_palindrome(char str[])
{
	int n = strlen(str);
	char* buffer = new char[n + 1]{};
	strcpy_s(buffer, n + 1, str);	//копирует строку str в строку buffer
	to_lower(buffer);
	remove_symbol(buffer, ' ');
	n = strlen(buffer);
	for (int i = 0; i < n / 2; i++)
	{
		if (buffer[i] != buffer[n - 1 - i])
		{
			delete[] buffer;
			return false;
		}
	}
	delete[] buffer;
	return true;
}

bool is_int_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != ' ')
			return false;
		if (str[i] == ' ' && str[i + 1] == ' ')
			return false;
	}
	return true;
}

int to_int_numer(char str[])
{
	if (!is_int_number(str))return 0;
	int number = 0;	//Значение числа
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			number *= 10;	//Сдвигаем число на 1 разряд влево, чтобы освободить младший разряд для следующей цифры
			number += str[i] - 48;	//48 - ASCII-код символа '0'
		}
	}
	return number;
}

bool is_bin_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != '0' && str[i] != '1' && str[i] != ' ')return false;
		if (str[i - 1] == ' ' && str[i] == ' ' && str[i + 1] == ' ')return false;
	}
	return true;
}

int  bin_to_dec(char str[])
{
	if (!is_bin_number(str))return 0;
	int decimal = 0;
	int weight = 1;	//Весовой коэффициент разряда
	//remove_symbol(str, ' ');
	int n = strlen(str);
	for (int i = n - 1; i >= 0; i--)
	{
		if (str[i] != ' ')
		{
			decimal += (str[i] - 48)*weight;
			weight *= 2;
		}
	}
	/*for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			decimal += (str[i] - 48)*pow(2, --n);
		}
	}*/
	return decimal;
}