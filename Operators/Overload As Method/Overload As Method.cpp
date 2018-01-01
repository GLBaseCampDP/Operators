// Overload As Method.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
struct A {
	int i;
	A()	{ i = 0;}
	A(int i) {	this->i = i;}
	//  �������������� ������� �������� �� �����
	A operator+(A& a) { 
		A c;
		c.i = i + a.i;
		return c;
	}
	//  �������������� ������� �������� �� �����
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
