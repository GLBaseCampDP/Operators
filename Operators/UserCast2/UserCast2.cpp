// UserCast2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

struct A {
	int i;
	A() { i = 0; }
	A(int i) { this->i = i; }
	A(double d) { i = (int)d; }
	A(const A&) = default;
};

struct B {
	int i;
	B() { i = 0; }
	B(A& a) { i = a.i; };
};

void f(B b) { std::cout << " B is created\n"; }

void main() {
	A a;
	f(a);		// ������ ������������
	A a1 = 1;
	B b = (B)a1; // ���� ������������
	system("pause");
}
