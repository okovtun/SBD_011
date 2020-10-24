#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ASSIGNMENT_OPERATOR
//#define INCREMENT_DECREMENT
//#define COMPAUND_ASSIGNMENTS
//#define HOME_WORK_TASK_1
//#define HOME_WORK_TASK_2
#define HOME_WORK_TASK_3
#define HOME_WORK_TASK_4
#define HOME_WORK_TASK_5

void main()
{

	//Оператор присваивания (Assignment operator)=
	//	(l-value) = (r-value);
	//a = b + c * 4 + 8 / 2; = 
#ifdef ASSIGNMENT_OPERATOR
	int a, b, c;
	a = b = c = 0;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment/Decrement (++/--)
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Suffix decrement  

	i = 3;
	int j = ++i;
	cout << j << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPAUND_ASSIGNMENTS
	int a = 2;
	a = a + 3;
	a += 3;
	a -= 3;
	a *= 3;
	a /= 3;
#endif // COMPAUND_ASSIGNMENTS

#if defined HOME_WORK_TASK_1
	int i = 3;
	int j = i++ + ++i;
	cout << i << endl;
	cout << j << endl;
#endif

#ifdef HOME_WORK_TASK_3
	int i = 3;
	i = i++ + 1 + (++i += 2);
	cout << i << endl;
#endif
}