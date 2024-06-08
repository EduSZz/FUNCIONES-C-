//Fecha: 2024-06-08
//Autor: Andrés Santillán
//Enunciado: Diseñe las funciones que calculan las operaciones aritméticas
//fundamentales: suma, resta, producto y división


#include <iostream>
#include <conio.h>
using namespace std;

//Función que calcula la suma de dos números
double OperacionSuma(double suma1, double suma2)
{
    return suma1+suma2;
}

//Función que calcula la resta de dos numeros
double OperacionResta(double resta1, double resta2)
{
    return resta1-resta2;
}

//Función que calcula la multiplicación de dos numeros
double OperacionMulti(double multi1, double multi2)
{
    return multi1*multi2;
}

//Función que calcula la multiplicación de dos numeros
double OperacionDivi(double divi1, double divi2)
{
    return divi1/divi2;
}


int main()
{
    cout<<endl<<"Funciones con las operaciones matemáticas";
    double res = OperacionSuma(10,22);
    cout<<endl<<"La suma es = "<<res;

    cout<<endl<<"Una suma un poco complicada ="<<OperacionSuma(12.3, OperacionSuma(2,4));
    cout<<endl<<"Una suma un poco complicada ="<<OperacionSuma(OperacionSuma(1,4), OperacionSuma(2,4));
    cout<<endl<<"¿¿Complicado?? = "<<OperacionSuma(OperacionSuma(1,OperacionMulti(2,3)), OperacionSuma(2,4))<<endl;

    //Calculadora sencilla
    //Pida al usuario 2 números reales, y luego la operación
    //que desea realizar. Dependiendo de la elección del usuario,
    //el programam calculará solo esa operación
    //Muestre un menú de opciones para mostrar las operaciones
    //que el programa puede realizar
    char opcion;
    double n1,n2;
    cout<<endl<<"Ingresa el primer número: ";
    cin>>n1;fflush(stdin);fflush(stdin);
    cout<<endl<<"Ingresa el segundo número: ";
    cin>>n2;fflush(stdin);fflush(stdin);

    while (true)
    {
        cout<<endl<<"Menú Princupal"<<endl<<"===============";
        cout<<endl<<"+ Suma";
        cout<<endl<<"- Resta";
        cout<<endl<<"* Multipilacion";
        cout<<endl<<"/ División";
        cout<<endl<<"1 Ingresar nuevos numeros";
        cout<<endl<<"S Salir";
        cout<<endl<<"Selecciona tu opción: ";
        opcion = getch(); fflush(stdin);
        switch (opcion)
        {
            case '+':cout<<endl<<"=======================> La suma es: "<<OperacionSuma(n1,n2);break;
            case '-':cout<<endl<<"=======================> La resta es: "<<OperacionResta(n1,n2);break;
            case '*':cout<<endl<<"=======================> La multiplicación es: "<<OperacionMulti(n1,n2);break;
            case '/':cout<<endl<<"=======================> La división es: "<<OperacionDivi(n1,n2);break;
            case 's':
            case 'S':
                break;
            case '1':
                cout<<endl<<"Ingresa el primer número: ";
                cin>>n1;fflush(stdin);
                cout<<endl<<"Ingresa el segundo número: ";
                cin>>n2;fflush(stdin);
                break;
        }
        if (opcion!= 's' || opcion!= 'S')
        {
            break;
        }
        
    }
    
    return 0;
}
