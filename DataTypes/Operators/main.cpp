#include<iostream>
using namespace std;

#define ASSIGNMENT_OPERATOR
//#define INCREMENT_DECREMENT
//#define COMPAUND_ASSIGNMENTS

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

}