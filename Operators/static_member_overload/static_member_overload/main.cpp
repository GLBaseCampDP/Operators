struct A {
  int f() { return 0; }
  static void f(int) { }
  static void f(double, double) { }
};

void f(int, int) { }

int main() {
    // виклик статичної функції
     A::f(1);
     A a;
    //виклик іншої статичної функції
     a.f(3.14, 5.2);
     a.f(); //виклик  метода
     f(5, 4); //виклик  звичайної функції

}
