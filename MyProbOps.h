
#ifndef MYPROBOPS_H
#define MYPROBOPS_H
#include <stdexcept>

/**
* Función para sacar el factorial
* @param n es un número entero
* @return factorial del número
*/
long long factorial(int n){
    if(n < 0){
        return -1;
    }

    if(n == 0){
        return 1;
    }

    return n * factorial(n - 1);
};

/**
* Función para combinar dos valores
* @param n es un número entero
* @param r es un número entero
* @return combinacion de los dos números
*/
long long permutacion(int n, int r){
    if (n < 0 || r < 0 || r > n) {
        throw std::invalid_argument("invalido para n y r.");
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

#endif
