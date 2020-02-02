struct A {
  int f( ) { return 1; }
  int f(int) { return 2; }
  void f(float) {  }
};

int main() {
A a;
a.f();     a.f(1);     a.f((float)3.14);
}
