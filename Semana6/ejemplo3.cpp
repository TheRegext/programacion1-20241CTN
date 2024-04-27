// Nombre:
// Apellido:
// Guía: 4
// N° EJ: 22
// Enunciado:

/**
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par.

Calcular e informar:
- La cantidad de ternas de números negativos ingresados de manera
consecutiva.
Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
*/

#include <iostream>

using namespace std;

int main(){

    int cuentaPar = 0;
    int num;
    int cuentaNegativos = 0;
    int cuentaTernas = 0;

    while(cuentaPar < 5){
        cout << "Ingrese numero: ";
        cin >> num;

        /// SALIR
        if(num%2 ==0){
            cuentaPar++;
        }

        /// NEGATIVOS
        if(num < 0){
            cuentaNegativos++;
            if(cuentaNegativos == 3){
                cuentaTernas++;
                cuentaNegativos = 2;
            }
        }
        else{
            cuentaNegativos = 0;
        }


    }
    system("cls");

    cout << "Total ternas: " << cuentaTernas << endl;








    return 0;
}
