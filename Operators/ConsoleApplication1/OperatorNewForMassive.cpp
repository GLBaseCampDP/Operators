// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct A {
	A() {
		cout << " ctor A() \n";
	};
	A(int j) {
		cout << " ctor A(int) \n";
	};
	~A() {
		cout << " dtor ~A()\n";
	};
	void* operator new[](size_t t)	{
		std::cout << "memory allocation \n";
		return malloc(t);
	}
	void operator delete[](void* p)	{
		std::cout << "free memory (B) \n";
		free(p);
	}
};
void main(void)
{
	A* a = new A[5]; // ������ ��������������� ���������
	delete[] a; // ������ ��������������� ���������
	system("pause");
}
