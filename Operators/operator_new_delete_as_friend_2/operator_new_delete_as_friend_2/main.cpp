#include <iostream>
struct A {   A() {}
  A(int j) {}
  void* operator new(size_t size) { //N1
    std::cout << " new(size_t) \n";
    return malloc(size);
  }
  void* operator new[](size_t size) { //N2
    std::cout << " new[](size_t) () \n";
    return ::operator new(size);
  }
  void* operator new(size_t size, int,int){ //N3
    std::cout << " new(size_t,int,int) \n";
    return malloc(size);
  }
  void* operator new (size_t t, void* loc){ //N4
    std::cout << " new (size_t , void* ) \n";
    return loc;
  }
  void* operator new (size_t t, bool loc) { //N5
    std::cout << " new (size_t , bool ) \n";
    return NULL;
  }
  void operator delete(void* p) noexcept { //D1
    std::cout << " delete(void*)\n";
    free(p);
  }
  void operator delete[](void* p) { //D1
    std::cout << " delete[](void*)\n";
    ::operator delete[](p);
  }
};
int main() {
A * a = new A(5); // N1
delete a; // D1
a = new A[5];// N2
delete[] a;//D2
a = new(10, 10) A(5); // N3
delete a; // D1
a = new(a) A(5); // N4
delete a;
a = new(true) A(); // N5
delete a;
}
