//Fecha: 2024-06-08
//Autor: Andrés Santillán
//Enunciado: (ADIVINA EL NUMERO) Diseñe un programa que permita generar un número
//aleatorio, que el usuario debe adivinar en X oportunidades.

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
    
    srand(time(NULL));
    const int OPORTUNIDADES = 5;
    int numUsuario;
    int cont = 1;
    bool ganaste = false;

    cout<<endl<< "Adivina el número correcto entre 1 y 50"; //genera números aleatorios entre 1 y 50
    int num = 1 + rand() % (50);
    //cout<<endl<< "El número en memoria es "<<num;


    while (cont <= OPORTUNIDADES && ganaste == false)
    {
        cout<<endl<<"Ingresa tu número: ";
        cin>> numUsuario;

        if (numUsuario < num)
            cout<<endl<<"Número incorrecto. Debes ingresar un número mayor!!";
        else if(numUsuario > num)
            cout<<endl<<"Número incorrecto. Debes ingresar un número menor!!";
        else 
            ganaste = true;
            
    cont++;
    }

    if (ganaste)
        cout<<endl<<"Número correcto. Ganaste un boleto al mundial de la FIFA 2026";
    else
        {
            cout<<endl<<"Se acabaron tus oportunidades. Perdiste :((";
            cout<<endl<<"El número ganador era: "<<num;
        }
    
    return 0;
}