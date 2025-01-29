#ifndef MYBASICOPS_H
#define MYBASICOPS_H
#include <stdexcept>

double suma(double a, double b){
    return a+b;
};

double resta(double a, double b){
    return a-b;
}

double multiplicacion(double a, double b){
    return a*b;
}

double dividir(int a, int b) {
    if (b == 0)
        throw std::runtime_error("Error: División entre cero");
    return a / b;
}

#endif
