// OperatorPlacmentNewAsMethod.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) { }
	~A() { std::cout << "dtor memory \n"; }

	void* operator new (size_t t, int loc)
	{
		std::cout << "memory allocation \n";
		return (void*)loc;
	}
	// перевантажений оператор 2
	void* operator new (size_t t, void* loc)
	{
		std::cout << "memory allocation \n";
		return loc;
	}

	void operator delete(void* p)
	{
		std::cout << " memory free";
		((A*)(p))->~A();
	}
	void show() {
		std::cout << "\tclass A: i = " << i << '\n';
	}
};
void main()
{
	char mem[sizeof(A)];
	void *p = mem;
	A * a = new(p) A(5); // виклик перевантаженого оператора
	a->show();
	delete a;
	system("pause");

}



