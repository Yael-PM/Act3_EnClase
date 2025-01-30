
#ifndef MYBASICOPS_H
#define MYBASICOPS_H
#include <stdexcept>

/**
* Función para sumar dos valores
* @param a es un número double
* @param b es un número double
* @return suma de los dos números
*/
double suma(double a, double b){
    return a+b;
};

/**
* Función para restar dos valores
* @param a es un número double
* @param b es un número double
* @return resta de los dos números
*/
double resta(double a, double b){
    return a-b;
}

/**
* Función para multiplicar dos valores
* @param a es un número double
* @param b es un número double
* @return multiplicación de los dos números
*/
double multiplicacion(double a, double b){
    return a*b;
}

/**
* Función para dividir dos valores
* @param a es un número double
* @param b es un número double
* @return division de los dos números
*/
double dividir(int a, int b) {
    if (b == 0)
        throw std::runtime_error("Error: División entre cero");
    return a / b;
}

#endif
