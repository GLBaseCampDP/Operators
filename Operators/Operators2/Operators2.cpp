// Operators2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

struct A {
	int f() { return 0; }
	static void f(int i1) { }
	static void f(double d1, double d2) { }
};

void f(int i1, int i2) { }

void main() {
	A::f(1);		// ������ �������� ������� 
	A a; 
	a.f(3.14, 5.2);	//������ ���� �������� �������
	a.f(); 		//������  ������
	f(5, 4); 		//������  �������� �������
}

