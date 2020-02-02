#include <iostream>

using namespace std;

struct A {
  int i;
  A() : i(0) {}
  A(int j) : i(j) {}

  int operator[] (int i){
    return (this->i += i);
  }

void show() {
    std::cout << " i=" << i << "\n";
  }
};

int main() {
  A a;
  int i = a[10];
  a.show();
}
