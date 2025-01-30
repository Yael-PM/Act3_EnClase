
#include <math.h>
#include <stdexcept>

// Función para sacar raíz cuadrada
double my_Sqrt(double x)
{
	if (x < 0)
	{
        throw std::runtime_error("Negative argument");
	}
    return sqrt(x);
}