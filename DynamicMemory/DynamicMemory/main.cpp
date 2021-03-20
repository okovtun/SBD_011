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
int* insert(int arr[], int& n, int value, int index);	//��������� �������� � ������ �� ���������� �������

int** push_row_back(int** arr, int& m, const int n);

int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int index);	//������� �������� �� ������� �� ���������� �������

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2
//#define FULL_TEST
//#define PREFORMANCE_TEST
#define PREFORMANCE_TEST_2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DYNAMIC_MEMORY_1
	int n;	//������ �������
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "������� ����������� ��������: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);
	cout << "������� ����������� ��������: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	cout << "��������� ���������� �������� �� �������:" << endl;
	arr = pop_back(arr, n);
	Print(arr, n);
	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	using std::cin;
	using std::cout;
	using std::endl;

#ifdef PREFORMANCE_TEST
	int m;	//���������� �����
	int n;	//���������� ��������� ������

	cout << "������� ���������� �����: "; cin >> m;
	cout << "������� ���������� ��������� ������: "; cin >> n;
	int** arr = Allocate(m, n);
	cout << "������ ��������, ��������� ����� � �����...\n";
	arr = push_row_back(arr, m, n);
	cout << "������ ���������!" << endl;
	Clear(arr, m);
#endif // PREFORMANCE_TEST

#ifdef FULL_TEST
	FillRand(arr, m, n);
	Print(arr, m, n);
	cout << "���������� ������ � �����:\n";
	arr = push_row_back(arr, m, n);
	Print(arr, m, n);
#endif // FULL_TEST

	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < 150000; i++)
	{
		arr = push_back(arr, n, rand());
	}
	Print(arr, n);
}

int** Allocate(const int m, const int n)
{
	//1) ������� ������ ����������:
	int** arr = new int*[m];
	//2) �������� ������ ��� ������ ���������� �������:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n] {};
	}
	return arr;
}
void  Clear(int** arr, const int m)
{
	//			��������� ���������� ������������ �������:
	//1) ������� ������:
	for (int i = 0; i < m; i++)
		delete[] arr[i];
	//2) ������� ������ ����������:
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
	//1) ������� �������� ������ ������� �������:
	int* buffer = new int[n + 1]{};
	//2) �������� �������� �� ��������� ������� � ��������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) ������� �������� ������:
	delete[] arr;
	//4) ��������� ����� ������� ������� ������� ������ �������:
	arr = buffer;
	//5) ���������� �������� � ����� �������:
	arr[n] = value;
	//6) ����� ���������� ��������, ������ ������� ������������� �� 1:
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