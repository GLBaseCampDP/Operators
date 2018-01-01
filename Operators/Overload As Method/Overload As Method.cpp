// Overload As Method.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
struct A {
	int i;
	A()	{ i = 0;}
	A(int i) {	this->i = i;}
	//  перевантажений бінарний оператор як метод
	A operator+(A& a) { 
		A c;
		c.i = i + a.i;
		return c;
	}
	//  перевантажений унарний оператор як метод
	void operator!() { 
			i = 0;
	}
	void show()	{
		std::cout << " i=" << i << "\n";
	}
};

void main() {
	A a;  A a1(1), a2(2);
	a = a1 + a2;
	a = a1.operator+(a2);
	a.show();
	!a;			
	a.show();
}
