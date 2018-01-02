// OperatorComma.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define OUT(M) cout<<"Overloaded comma operator - "<<M<<" of class \n";

struct A {
	int i;
	A() : i(0) { cout << "ctor A() \n "; }
	A(int j) : i(j) { cout << "ctor A(int) \n "; }

	void show() 	{
		cout << "\tclass A: i = " << i << '\n';
	}
	bool operator <= (A a) 	{
		return (i <= a.i) ? true : false;
	}
	A& operator , (A& a) { // перевантажений оператор 1
		i = a.i;
		OUT("intside")
			return *this;
	}
	A& operator++ (int) { // постфіксна форма
		this->i++;
		return *this;
	}
};
A& operator , (A& a, const int b) // перевантажений оператор 2
{
	a.i = b;
	OUT("outside")
	return a;
}
void main(void)
{
	A a(5), b;
	for (a, 1; a <= (A)10; b, a++)
		a.show();
	system("pause");
}


