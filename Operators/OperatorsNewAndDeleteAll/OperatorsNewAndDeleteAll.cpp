// OperatorsNewAndDeleteAll.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class A { int i;
public:
	A() : i(0) {
		cout << " ctor A(): i = " << i << '\n';
	};
	A(int j) : i(j) {
		cout << " ctor A(int): i = " << i << '\n';
	};
	~A() {
		cout << " dtor ~A()\n";
	};
	// в новому стандарті не підтримується
	friend void* operator new(size_t, int, int); // N1
	friend void* operator new(size_t); // N2
	friend void* operator new[](size_t); // N3
	friend void operator delete(void*) ; // D1
	friend void operator delete[](void*) throw(); // D2
	void show() 	{
		std::cout << "\tclass A: i = " << i << '\n';
	}

	static void* operator new(std::size_t sz, bool b) {// N4
		cout << "memory allocation - operator N4" << b << '\n';
		return ::operator new(sz);
	}
	// custom placement delete
	static void operator delete(void* ptr, bool b){ // D3
		std::cout << "free memory - operator D3\n";
		::operator delete(ptr);
	}
};
// в новому стандарті не підтримується
void* operator new (size_t t, int x, int y) { //N1
	std::cout << "memory allocation - operator N1\n";
	return malloc(x * y);
}
void* operator new(size_t size) { //N2
	std::cout << "memory allocation - operator N2\n";
	return malloc(size);
}
void* operator new [](size_t size) { //N3
	std::cout << "memory allocation - operator N3\n";
	return malloc(size);
}
void operator delete(void* p)  { //D1
	std::cout << "free memory - operator D1\n";
	free(p);
}
void operator delete[](void* p) throw() { //D2
	std::cout << "free memory - operator D2\n";
	free(p);
}
void main(void) {
	A * a1 = new (true) A;
		// не підтримується і новому стандарті new(10, 10) A(2); // N1
	a1->show();
	delete (true) a1; // D1
	std::cout << "___________________\n";
	A * a2 = new A(3);	// N2
	a2->show();
	delete a2;// D1
	std::cout << "___________________\n";
	A * a3 = new A[5];	// N3
	a3->show();
	delete[] a3;	//D2
	std::cout << "___________________\n";
	int * p2 = new int[6];	// N3
	std::cout << " massive is created\n";
	delete[] p2; // оператор D2
	system("pause");
}
