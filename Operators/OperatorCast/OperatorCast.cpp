// OperatorCast.cpp: ���������� ���������������� ������� ��� ���������� DLL.
//

#include "stdafx.h"
#include <iostream>

struct A {
	int i;
	A() : i(0) {}
	A(int j) : i(j) {}

	// int operator int() {return 1;} ������� - ���� �������� ���
	
	operator int() {  // �������� ����������	
			return i;
	}
	operator int* (){  // �������� ����������
		return &i;
	}
	void show()	{
		std::cout << " A::i=" << i << "\n";
	}
};
void main()
{
	A a(5);
	int j = a; 		// ���������� �� ���� int
	std::cout << " j=" << j;
	int* p = a; 		// ���������� �� ���� int*
	std::cout << " *p=" << *p;
}

