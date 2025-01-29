#include <iostream>
#include <cassert>
#include "../MyProbOps.h"

using namespace std;

void tests() {
    assert(factorial(4) == 24);
    assert(permutacion(5, 2) == 10);
}

int main() {
    tests();
    cout << "Tests completados y pasados" << endl;
    return 0;
}

