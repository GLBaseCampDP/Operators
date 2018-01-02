// Overload As Method.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
struct A {
	int i;
	A(): i(0)	{}
	A(int j): i(j) {}
	//  �������������� ������� �������� �� �����
	A operator+(A& a) { 
		return A(i + a.i);
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
