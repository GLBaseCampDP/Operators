// Cast In Inheratance.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct A {
	int f() { return 0; }
	int f(int i) { return i; }
};

struct B : public A {
	int f() { return 1; }
	int f(int i) { return i + 10; }
};

void main() {
	B b;
	int j = b.f(); 		// j=1
	j = b.f(1);			// j=11
	j = b.A::f(); 		// j=0
	j = b.A::f(1); 		// j=1
}


