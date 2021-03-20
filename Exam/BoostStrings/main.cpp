#include<iostream>
#include<boost/algorithm/string.hpp>
using namespace std;

void main()
{
	char str[] = "Hello Boost!";
	cout << str << endl;
	boost::to_upper(str);
	cout << str << endl;
	boost::to_lower(str);
	cout << str << endl;
}