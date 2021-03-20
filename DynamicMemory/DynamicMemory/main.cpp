#include<iostream>
#include<ctime>
using namespace std;

int** Allocate(const int m, const int n);
void  Clear(int** arr, const int m);

void FillRand(int arr[], const int n);
void FillRand(int** arr, const int m, const int n);
void Print(int arr[], const int n);
void Print(int** arr, const int m, const int n);

int* push_back(int arr[], int& n, int value);
int* push_front(int arr[], int& n, int value);
int* insert(int arr[], int& n, int value, int index);	//Вставляет значение в массив по указанному индексу

int** push_row_back(int** arr, int& m, const int n);

int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int index);	//Удаляет значение из массива по указанному индексу

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2
//#define FULL_TEST
//#define PREFORMANCE_TEST
#define PREFORMANCE_TEST_2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DYNAMIC_MEMORY_1
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	cout << "Удавление последнего элемента из массива:" << endl;
	arr = pop_back(arr, n);
	Print(arr, n);
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	using std::cin;
	using std::cout;
	using std::endl;

#ifdef PREFORMANCE_TEST
	int m;	//Количество строк
	int n;	//Количество элементов строки

	cout << "Введите количество строк: "; cin >> m;
	cout << "Введите количество элементов строки: "; cin >> n;
	int** arr = Allocate(m, n);
	cout << "Память выделена, добавляем троку в конец...\n";
	arr = push_row_back(arr, m, n);
	cout << "Строка добавлена!" << endl;
	Clear(arr, m);
#endif // PREFORMANCE_TEST

#ifdef FULL_TEST
	FillRand(arr, m, n);
	Print(arr, m, n);
	cout << "Добавление строки в конец:\n";
	arr = push_row_back(arr, m, n);
	Print(arr, m, n);
#endif // FULL_TEST

	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < 150000; i++)
	{
		arr = push_back(arr, n, rand());
	}
	Print(arr, n);
}

int** Allocate(const int m, const int n)
{
	//1) Создаем массив указателей:
	int** arr = new int*[m];
	//2) Выделяем память под строки двумерного массива:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n] {};
	}
	return arr;
}
void  Clear(int** arr, const int m)
{
	//			Удавление двумерного динамичского массива:
	//1) Удаляем строки:
	for (int i = 0; i < m; i++)
		delete[] arr[i];
	//2) Удаляем массив указателей:
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int* push_back(int arr[], int& n, int value)
{
	//////////////////////////////////////////////////////////////////////////
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1]{};
	//2) Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем исходный массив:
	delete[] arr;
	//4) Подменяем адрес старого массива адресом нового массива:
	arr = buffer;
	//5) Записываем значение в конец массива:
	arr[n] = value;
	//6) После добавления значения, размер массива увеличивается на 1:
	n++;
	return arr;
	//////////////////////////////////////////////////////////////////////////
}

int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}

int** push_row_back(int** arr, int& m, const int n)
{
	int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];
	delete[] arr;
	buffer[m] = new int[n] {};
	m++;
	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)	buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}