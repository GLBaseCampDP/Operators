#include <iostream>
class A {
  int i;
  public:
    int get() { return i; }
    A() : i(0) {}
    A(int j) : i(j) {}
    void show(){
       std::cout << " i=" << i << "\n";
    }
  friend bool operator==(A, int);
};
// перевантажений бінарний оператор як friend
// доступ до закритих полів є
bool operator==(A a, int i) {
  return (a.i == i);
}
//  перевантажений бінарний оператор
// як не friend і, відповідно,
// доступу до закритих полів немає
A operator+(A a, A b) {
  return A(a.get() + b.get());
}

int main() {
  A a, a1(1);
  (a == 1) ? std::cout << "TRUE\n"  :
    std::cout << "FALSE\n";
  a = 10 + a1;
  a.show();
}
