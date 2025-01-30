
#include <iostream>
#include <cassert>
#include "../MyBasicOps.h"

using namespace std;

void tests() {
  assert(suma(5, 5) == 10.0);
  assert(resta(5, 5) == 0.0);
  assert(multiplicacion(5, 5) == 25.0);
  assert(dividir(5, 5) == 1.0);
}

int main() {
  tests();
  cout << "Tests completados y pasados" << endl;
  return 0;
}
