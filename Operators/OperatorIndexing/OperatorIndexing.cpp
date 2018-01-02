// OperatorIndexing.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}

	int operator[] (int i)	{
		return (this->i += i);
	}

	void show() {
		std::cout << " i=" << i << "\n";
	}
};

void main() {
	A a;
	int i = a[10];
	a.show();
}


