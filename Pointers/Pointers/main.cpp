#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

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

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
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
	//cout << &'+' << endl;//Низя так делать(
	const int A = 2;
	cout << &A << endl;
	//int - int
	//int* - Указатель на int
	//char - char
	//char* - Указатель на char
	//double - double
	//double* - Указатель на double  
#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	for (int i = 0; i < n; i++)
	{
		//Доступ к элементам массива через 
		//арифметику указателей и оператор разыменования
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		//Доступ к элементам массива через оператор индексирования [].
		//Оператор индексирования [] возвращает значение по индексу.
		//Он вычисляет адрес элемента, и разыменовывает его.
		cout << arr[i] << "\t";
	}
	cout << endl;

	int* p_arr = arr;
	for (int i = 0; i < n; i++)
	{
		cout << *p_arr++ << "\t";
	}
	cout << endl;
}