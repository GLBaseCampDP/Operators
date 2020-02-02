#include <iostream>
struct A {
  int i;
  A() { i = 0; }
  A(int i) { this->i = i; }
  A(double d) { i = (int)d; }
};

void f(A a) {
  std::cout << " A is created \n" ;
}

int main() {
 A a;
 f(1); // int приводиться до A автоматично
 f((A)1); // явне приведення
 f(3.14); // double приводиться до A
 f(a); // приведення не потрібне
}
