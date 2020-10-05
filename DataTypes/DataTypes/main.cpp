#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << (bool)0.000 << endl;
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
----------------------------------
*/