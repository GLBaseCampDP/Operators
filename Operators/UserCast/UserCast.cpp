// UserCast.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
struct A {
	int i;
	A() { i = 0; }
	A(int i) { this->i = i; }
	A(double d) { i = (int)d; }
};
void f(A a) {
	std::cout << "�������� �ᒺ�� \n" ;
}
void main() {
	A a;
	f(1); 		// int ����������� �� A �����������
	f((A)1); 	// ���� ����������
	f(3.14); 	// double ����������� �� A
	f(a); 		// ���������� �� �������
}

