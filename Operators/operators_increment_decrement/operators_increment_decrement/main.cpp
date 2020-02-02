#include <iostream>

using namespace std;
#include <iostream>
struct A {
  int i;
  A() : i(0) {}
  A(int j) : i(j) {}
  int operator++ (int){  // постфіксна форма
     int i = this->i;
     this->i++;
     return i;
  }
  int operator++ (){  // префіксна форма
    i++;
    return i;
  }

  void show() {  std::cout << " A::i=" << i << "\n";  }
  };

  int main() {
    A a(5);
    int j = a++; // постфіксна форма
    std::cout << " j=" << j;
    a.show();
    a.i = 5;
    j = ++a;// префіксна форма
    std::cout << " j=" << j;
    a.show();
  }
