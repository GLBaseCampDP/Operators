// OperatorPrefixAndpostfix.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#define J_OUT std::cout << " j=" << j;

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}
	int operator++ (int){  	// постфіксна форма
		int i = this->i;
		this->i++;
		return i;
	}
	int operator++ (){  	// префіксна форма
		i++;
		return i;
	}
	void show()	{
		std::cout << " A::i=" << i << "\n";
	}
};
void main() {
	A a(5);
	int j = a++; 	// постфіксна форма
	J_OUT;
	a.show();
	a.i = 5;
	j = ++a;		// префіксна форма
	J_OUT;
	a.show();
}
