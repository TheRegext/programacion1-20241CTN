// Nombre:
// Apellido:
// Gu�a:
// N� EJ:
// Enunciado:

/**
Hacer un programa para ingresar una lista de 10 n�meros, luego informar

A) el m�ximo y
B) la posici�n del m�ximo en la lista.

NOTA: En caso de �empates� considerar la primera aparici�n.

Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listar� M�ximo 35 Posici�n 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listar� M�ximo 55 Posici�n 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listar� M�ximo -6
Posici�n 8.

El tercer ejemplo demuestra que NO SIEMPRE en una lista de n�meros el
m�ximo es un positivo.

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
