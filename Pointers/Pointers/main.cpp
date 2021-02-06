#include<iostream>
using namespace std;

/*
---------------------------------------------
Указатель (Pointer) - это переменная, которая содержит
адрес другой переменной.
Адрес - это ЧИСЛО длиной 4 Байта, означающее порядковый 
номер Байта в оперативной памяти.
Hexadecimal
(CPU) (RAM)
---------------------------------------------
*/

void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2;		//Объявление переменной 'a'
	int* pa = &a;	//Объявление указателя 'pa' и инициализация его адресом переменной 'a'
	cout << a << endl;
	cout << &a << endl;	//Получаем адрес переменной 'a' прямо при выводе.
	cout << pa << endl;	//Выводим адрес переменной 'a', хранящийся в указателе 'pa'.
	cout << *pa << endl;//Разыменовывем указатель 'pa', и получаем значение по адресу.

	//Указатели еще можно объявлять вот так:
	int* pb;
	//cout << pb << endl;
	int b = 3;
	pb = &b;
	cout << pb << endl;
	cout << *pb << endl;
	cout << *&"Hello World" << endl;
	//cout << &2. << endl;
	const int A = 2;
	cout << &A << endl;
	//int - int
	//int* - Указатель на int
	//char - char
	//char* - Указатель на char
	//double - double
	//double* - Указатель на double
}