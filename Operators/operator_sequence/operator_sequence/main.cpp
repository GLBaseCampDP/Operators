#include <iostream>
using namespace std;
#define OUT(M) cout<<"Overloaded comma\
   operator - "<<M<<" of class \n";
struct A {
  int i;
  A(): i(0) { cout << "ctor A() \n "; }
  A(int j): i(j) {cout<< "ctor A(int) \n "; }

  void show()
  {cout << "\tclass A: i = " << i << '\n'; }
  bool operator <= (A a)
  {  return (i <= a.i) ? true : false; }
  A& operator , (A& a) {
    i = a.i;    OUT("inside")
    return *this;
  }
  A& operator++ (int) { // постфіксна форма
        this->i++;
        return *this;
  }
};

  // перевантажений оператор не як метод
A& operator , (A& a, const int b) {
    a.i = b;  OUT("outside")
    return a;
}


int main(void) {
    A a(5), b;
    for (a, 1; a <= (A)10; b, a++)
        a.show();
}
