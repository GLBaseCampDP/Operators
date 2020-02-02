#include <iostream>
#include <utility>

struct A {
  int i;
  A(): i(0) { }
  A(int j) : i(j) { }

  A& operator= (A& a){
    i = 2*a.i;
    return *this;
  }

  A& operator= (int j) {
    i = 2*j;
    return *this;
  }

  A& operator= (A&& a) {
    std::cout << "Wow\n";
    i = a.i + 2;
    return *this;
}

 void show(){std::cout << " i=" << i << "\n";}
};

int main() {
  A a, a1(10);
  a = a1;                  a.show();
  a = 100;                 a.show();
  a = std::move(A(1000));  a.show();
}
