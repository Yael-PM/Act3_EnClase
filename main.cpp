
#include <iostream>
#include "MyMathLib.h"
#include "MyBasicOps.h"
#include "MyProbOps.h"

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Sqrt(9) = " << my_sqrt(9) << '\n';
    std::cout << "suma(5, 5) = " << suma(5, 5) << '\n';
    std::cout << "resta(5, 5) = " << resta(5, 5) << '\n';
    std::cout << "multiplicacion(5, 5) = " << multiplicacion(5, 5) << '\n';
    std::cout << "division(5, 5) = " << dividir(5, 5) << '\n';
    std::cout << "factorial(4) = " << factorial(4) << '\n';
    std::cout << "permutacion(5, 2) = " << permutacion(5, 2) << '\n';

}
