#include <iostream>
struct A { int i;
  A() : i(0) {}
  A(int j) : i(j) {}
  ~A() { std::cout << "dtor \n"; }
// перевантажений оператор 1
  void* operator new (size_t t, int loc) {
    std::cout << "memory allocation \n";
    return (void*) loc;
  }
// перевантажений оператор 2
  void* operator new (size_t t, void* loc) {
    std::cout << "memory allocation \n";
    return loc;
  }
  void operator delete(void* p) {
    std::cout << " memory is free";
    ((A*)(p))->~A();
  }
  void show() {
    std::cout << "\tclass A: i = "<< i <<'\n';
  }
};
int main() {
    char mem[sizeof(A)];
    void *p = mem;
    A * a = new(p) A(5);
    a->show();
    delete a;
}
