//Loops
#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define Space  32
#define Enter  13
#define ArrowUp		72
#define ArrowDown	80
#define ArrowLeft	75
#define ArrowRight	77

#define CONST_1	1
#define CONST_2 2
#define CONST_3 3
#define CONST_N 4

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();	//ASCII
		//cout << (int)key << "\t" << key << endl;

		/*if (key == 'w' || key == 'W' || key == ArrowUp)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == ArrowDown)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A'|| key == ArrowLeft)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == ArrowRight)
		{
			cout << "Вправо" << endl;
		}
		else if (key == Space)
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Огонь" << endl;
		}
		else
		{
			if(key != -32 && key != Escape)cout << "Error" << endl;
		}*/
		
		switch (key)
		{
		case ArrowUp:
		case 'W':
		case 'w': cout << "Вперед" << endl; break;
		case ArrowDown: 
		case 'S': 
		case 's': cout << "Назад" << endl; break;
		case ArrowLeft:
		case 'A': 
		case 'a': cout << "Влево" << endl; break;
		case ArrowRight: 
		case 'D': 
		case 'd': cout << "Вправо" << endl; break;
		case 32:  cout << "Прыжок" << endl; break;
		case Enter:  cout << "Огонь" << endl; break;
		case Escape:cout << "Exit";
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);




#ifdef SWITCH_SYNTAX
	int var=0;
	switch (var)
	{
	case CONST_1: /*code1*/; break;
	case CONST_2: /*code2*/; break;
		//.........................
		//.........................
		//.........................
	case CONST_N: /*codeN*/; break;
	default: /*default code*/
	}
#endif // switch_syntax




}

/*
-----------------------
switch
-----------------------
*/

/*
----------------------------------
= присвоить
== равно (сравнить)
!= НЕравно
----------------------------------
*/