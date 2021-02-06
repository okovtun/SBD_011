#include"Functions.h"
#include"Print.h"
//#include"Print.cpp"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	//setlocale(LC_ALL, "C");
	const int C_SIZE = 25;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

