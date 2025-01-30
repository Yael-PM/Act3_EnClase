
#ifndef MYBASICOPS_H
#define MYBASICOPS_H
#include <stdexcept>

// Función para sumar
double suma(double a, double b){
    return a+b;
};

// Función para restar
double resta(double a, double b){
    return a-b;
}

// Función para multiplicar
double multiplicacion(double a, double b){
    return a*b;
}

// Función para dividir
double dividir(int a, int b) {
    if (b == 0)
        throw std::runtime_error("Error: División entre cero");
    return a / b;
}

#endif
