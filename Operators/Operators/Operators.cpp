// Operators.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
struct A {
	int f() { return 1; }
	int f(int x) { return x; }
	void f(float x) {  }
};

void main() {
	A a;
	a.f();     a.f(1);     a.f((float)3.14);
}


