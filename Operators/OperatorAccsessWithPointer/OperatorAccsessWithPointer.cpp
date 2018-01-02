// OperatorAccsessWithPointer.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}

	A* operator -> () { // �������������� �������� �������
		std::cout << " A: overloaded access operator \n";
		return this;
	}

	void show() {
		std::cout << " A::i=" << i << "\n";
	}
};
void main()
{
	A a(5);
	a->i;
}
