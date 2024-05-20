/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ
/// Enunciado:

/**

Escribir una función esPrimo que reciba un número entero y retorne true si el numero recibido es primo y false si no es primo.

Hacer un programa que permita ingresar una lista de 10 numeros. Se pide contar y mostrar la cantidad total de números primos. Utilizar la función anterior.

*/

#include <iostream>

using namespace std;

/// DECLARACION DE LA FUNCION
bool esPrimo(int num);

int main()
{
    int n;
    int contadorPrimos=0;
    for(int i=0; i<10; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>n;
        if(esPrimo(n))
        {
            contadorPrimos++;
        }
    }
    cout<<"Total de Primos: "<<contadorPrimos<<endl;

    return 0;
}

/// IMPLEMENTACION DE LA FUNCION

bool esPrimo(int num)
{
    int c=0;
    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return true;
    }
    return false;
}
