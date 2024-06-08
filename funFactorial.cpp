// Fecha: 2024-06-08
// Autor: Andrés Santillán
// Enunciado: Diseñe la función que calcula el factorial de un entero.
// Por ejemplo: El factorial de 5 es 1x2x3x4x5 = 120
// El factorial de 4 es 1x2x3x4 = 24
// El factorial de 0 = 1

#include <iostream>
using namespace std;

// Calcula el factorial de un numero
int Factorial(int num)
{
    if (num == 0)
        return 1;
    else
    {
        int fac = 1;
        for (int k = 1; k <= num; k++)
        {
            fac = fac * k;
        }
        return fac;
    }
}

int main()
{
    cout << endl << "El factorial de 5 es: " << Factorial(5); // Llama la función
    cout << endl << "El factorial de 10 es: " << Factorial(8);
    cout << endl << "El factorial de 4 es: " << Factorial(4);
    return 0;
}