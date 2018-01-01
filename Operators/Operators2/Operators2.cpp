// Operators2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct A {
	int f() { return 0; }
	static void f(int i1) { }
	static void f(double d1, double d2) { }
};

void f(int i1, int i2) { }

void main() {
	A::f(1);		// виклик статичної функції 
	A a; 
	a.f(3.14, 5.2);	//виклик іншої статичної функції
	a.f(); 		//виклик  метода
	f(5, 4); 		//виклик  звичайної функції
}

