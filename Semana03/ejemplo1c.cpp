// Nombre:
// Apellido:
// Guía:
// N° EJ:
// Enunciado:
/// ENUNCIADO: HACER PROGRAMA PARA INGRESAR UN NUMERO
/// Y MOSTRAR POR PANTALLA UN CARTEL INDICANDO SI EL
/// MISMO ES POSITIVO, NEGATIVO O CERO.
/// IMPORTANTE: SE DEBE MOSTRAR UN "UNICO" CARTEL.


/// OPERADORES RELACIONALES

/// <  MENOR QUE
/// >  MAYOR QUE
/// <= MENOR O IGUAL QUE
/// >= MAYOR O IGUAL QUE
/// == IGUAL QUE
/// != DIFERENTE QUE
#include <iostream>

using namespace std;

int main()
{
    float numero;

    cout << "INGRESE UN NUMERO: ";
    cin >> numero;

    if(numero == 0)
    {
        cout << "EL NUMERO ES CERO";
    }
    else
    {
        if(numero < 0)
        {
            cout << "NUMERO ES NEGATIVO";
        }
        else
        {
            cout << "NUMERO ES POSITIVO";
        }
    }

return 0;
}
