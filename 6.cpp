#include <iostream>

using namespace std;

int main () {
 int a = 0;
 for (int i = 1; i <= 100; i++) {
      a = a + i * i;
  }
  cout << a << " ";
  int b = 5050 * 5050;
  cout << b - a;
  return 0;
}
