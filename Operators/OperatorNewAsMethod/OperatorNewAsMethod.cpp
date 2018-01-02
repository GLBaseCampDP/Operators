// OperatorNewAsMethod.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <iostream>

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}
	void* operator new(size_t size) {
		std::cout << " Memory allocated ";
		return malloc(size);
	}
	void operator delete(void* p)
	{
		std::cout << " memory free";
		free(p);
	}
	void show() {
		std::cout << "\tclass A: i = " << i << '\n';
	}
};
void main()
{
	A * a = new A(5);
	a->show();
	delete a;
}
