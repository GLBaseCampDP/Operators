#include <iostream>
using namespace std;

class A {  int i;
  public:
    A() : i(0){
      cout << " ctor A(): i =" << i <<'\n';};
    A(int j) : i(j) {
      cout << " ctor A(int):i =" << i<<'\n';};
    ~A() {
      cout << " dtor ~A()\n";};
friend void* operator new(size_t);
friend void operator delete(void*) throw();
    void show(){
      cout << "\tclass A: i = " << i << '\n';}
};
void* operator new(size_t size) {
  cout << "memory allocation \n";
  return malloc(size);
}
void operator delete(void* p) throw() {
  cout << "free memory \n";
  free(p);
}
int main(void) {
A* a;
a = new A(5);
a->show();
delete a;
int *p = new int; //викличуться
delete p;         //навантажені оператори
}
