
#ifndef MYPROBOPS_H
#define MYPROBOPS_H
#include <stdexcept>

// Función para obtener un fcatorial
long long factorial(int n){
    if(n < 0){
        return -1;
    }

    if(n == 0){
        return 1;
    }

    return n * factorial(n - 1);
};

// Función para combinaciones
long long permutacion(int n, int r){
    if (n < 0 || r < 0 || r > n) {
        throw std::invalid_argument("invalido para n y r.");
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

#endif
