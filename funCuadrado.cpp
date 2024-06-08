//Fecha: 2024-06-08
//Autor: Andrés Santillán
//Enunciado: Diseñe la función que recibe como parámetro un entero
//y retorna el cuadrado de ese entero

#include <iostream>
using namespace std;

//Eleva un entero al cuadrardo
int CuadradoNum(int num)
{
    int res;
    res = num * num;

    return res;
}

int main()
{
    cout<<endl<<"Función que calcula el cuadrado de un entero.";
    int x = CuadradoNum(12) + 100*4/2;
    cout<<endl<<"El resultado de la operacion es: "<<x;

    cout<<endl<<"El cuadrado de 5 es "<<CuadradoNum(5);
    cout<<endl<<"El cuadrado de 10 es "<<CuadradoNum(10);
    cout<<endl<<"El cuadrado de 15 es "<<CuadradoNum(15);

    cout<<endl<<"Ingresa el numero que quieres elevar al cuadrado: ";
    cin>>x;
    cout<<endl<<"El cuadrado de "<< x << " es " <<CuadradoNum(x);
    return 0;
}