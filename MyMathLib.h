
#include <math.h>
#include <stdexcept>

/**
* Función para sacar la raíz cuadrada
* @param x es un número double
* @return la raíz cuadrada del número
*/
double my_sqrt(double x)
{
	if (x < 0)
	{
        throw std::runtime_error("Negative argument");
	}
    return sqrt(x);
}
