// OperatorPrefixAndpostfix.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#define J_OUT std::cout << " j=" << j;

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}
	int operator++ (int){  	// ���������� �����
		int i = this->i;
		this->i++;
		return i;
	}
	int operator++ (){  	// ��������� �����
		i++;
		return i;
	}
	void show()	{
		std::cout << " A::i=" << i << "\n";
	}
};
void main() {
	A a(5);
	int j = a++; 	// ���������� �����
	J_OUT;
	a.show();
	a.i = 5;
	j = ++a;		// ��������� �����
	J_OUT;
	a.show();
}
