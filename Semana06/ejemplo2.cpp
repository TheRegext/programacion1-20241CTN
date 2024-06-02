// Nombre:
// Apellido:
// Guía:
// N° EJ:
// Enunciado:


/**

Hacer un programa donde se ingresa una lista de numeros enteros que finaliza cuando se ingresa el tercer numero par.

Mostrar el promedio de los numeros pares.
*/
#include <iostream>

using namespace std;

int main(){

    int num;
    int cuentaPares = 0;
    int acumulaPares = 0;
    float promedioPares;

    while(cuentaPares < 3){
        cout << "ingrese un numero: ";
        cin >> num;

        if(num % 2 == 0){

            cuentaPares++;
            acumulaPares = acumulaPares + num;
        }
    }

    promedioPares = (float)acumulaPares / cuentaPares;

    cout << "el promedio de los pares es: " << promedioPares << endl;

    return 0;
}








