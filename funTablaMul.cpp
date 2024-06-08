//Fecha: 2024-06-08
//Autor: Andrés Santillán
//Enunciado: Diseñe la función que imprima una tabla de multiplicar que
//se pasa como parámetro

#include <iostream>
using namespace std;

void TablaMultiplicar(int tabla)
{
    cout<<endl<<"Tabla de multiplicar del: "<<tabla;

    for (int k=1; k <=12; k++)
    {
        cout<<endl<<tabla<<" x "<<k<<" = "<<(tabla*k);
    }
}

//Función que imprime la tabla de multiplicar. La función establece
//el límite inferior y límite superior para imprimir la tabla
void TablaConLimite(int tabla, int inicio=1, int fin=12)
{
    cout<<endl<<"Tabla de multiplicar del: "<<tabla;

    for (int k=inicio; k <=fin; k++)
    {
        cout<<endl<<tabla<<" x "<<k<<" = "<<(tabla*k);
    }
}

int main()
{
    cout<<endl<<"Función tabla de multiplicar";
    TablaMultiplicar(5); cout<<endl; //Llama a la fucnión
    TablaMultiplicar(10); cout<<endl;
    TablaMultiplicar(7); cout<<endl;

    int num;
    cout<<endl<<"Inrese la tabla que desea calcular: ";
    cin>>num;
    TablaMultiplicar(num);

    TablaConLimite(3,4,10);cout<<endl;//Llama a la segunda fución
    TablaConLimite(12,2,8);cout<<endl;
    TablaConLimite(11);cout<<endl;//La función asume los valores por defecto de 1 y 12

    return 0;
}