// OperatorAccsessWithPointer.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}

	A* operator -> () { // перевантажений оператор доступу
		std::cout << " A: overloaded access operator \n";
		return this;
	}

	void show() {
		std::cout << " A::i=" << i << "\n";
	}
};
void main()
{
	A a(5);
	a->i;
}
