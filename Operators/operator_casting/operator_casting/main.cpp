#include <iostream>
struct A {
  int i;
  A() : i(0) {}
  A(int j) : i(j) {}
  // int operator int() {return 1;}
  // помилка - явно вказаний тип
  operator int() {  return i;  }
  operator int* (){  return &i;  }
  void show(){
      std::cout << " A::i=" << i << "\n";
    }
  };

  int main() {
    A a(5);
    int j = a; // приведення до типу int
    std::cout << " j=" << j;
    int* p = a; // приведення до типу int*
    std::cout << " *p=" << *p;
  }
