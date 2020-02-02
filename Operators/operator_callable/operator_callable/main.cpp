#include <iostream>
struct A {
  int i;
  A() : i(0) {}
  A(int j) : i(j) {}

  A operator()(int i){ return A((int)i); }
  int operator() (int i, int j) {
    return (this->i + i + j);
  }
  void show() {
   std::cout << " i=" << i << "\n";
  }
};

int main() {
  A a(1);
  a.show();
  (a(4)).show();
  a.show();
  std::cout << "overloaded operator: result - "
   << a(3, 4) << '\n';
}
