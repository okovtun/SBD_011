#pragma once
#include<iostream>
using namespace std;

//VCS - Version Conreol System
//СКВ - Система контроля версий
//Commit
//Branches
//Scram, Agile....
//GitHub
//VCS: SVN, Subversion, Jira, .... !!!Git!!!
//GitHub
//Repository - это хранилище исходных кодов.

#ifdef OVERLOAD_EXAMPLES
void function()
{
	cout << "Без параметров" << endl;
}
int function(int a)
{
	cout << "Один параметр типа int" << endl;
	return 0;
}
#endif // OVERLOAD_EXAMPLES

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);