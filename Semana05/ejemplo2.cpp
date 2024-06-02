// Nombre:
// Apellido:
// Guía:
// N° EJ:
// Enunciado:

/**
Hacer un programa para ingresar una lista de 10 números, luego informar

A) el máximo y
B) la posición del máximo en la lista.

NOTA: En caso de “empates” considerar la primera aparición.

Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6
Posición 8.

El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
máximo es un positivo.

*/

#include <iostream>

using namespace std;

int main()
{

    int i, num, maximo, pos;

    for(i = 1; i <= 5; i++)
    {
        cout << "Ingreso #" << i << ": ";
        cin >> num;

        /**if(i==1){
            maximo = num;
            pos = i;
        }
        else{
            if(num > maximo){
                maximo = num;
                pos = i;
            }
        }*/

        if(i == 1 || num > maximo){
            maximo = num;
            pos = i;
        }
    }

    cout << "Valor maximo: " << maximo << endl;
    cout << "En la posicion: " << pos << endl;

    return 0;
}
