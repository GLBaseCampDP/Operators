// OperatorWithAssigment.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}
	A(A& a) : i(a.i) {}
	A& operator+= (A& a) 	{
		i += a.i;
		return *this;
	}

	void show()	{
		std::cout << " i=" << i << "\n";
	}
};
void main()
{
	A a1(5), a(10);
	a += a1; 		// �������������� ��������
	a.show();
}
