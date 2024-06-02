/// Nombre:
/// Apellido:
/// Guia:
/// N° EJ:
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

int main(){

    float numero;

    cout << "INGRESE UN NUMERO: ";
    cin >> numero;

    if(numero > 0){
        cout << "EL NUMERO " << numero << " ES POSITIVO" << endl;
    }

    if(numero == 0){
        cout << "EL NUMERO " << numero << " ES CERO" << endl;
    }

    if(numero < 0){
        cout << "EL NUMERO " << numero << " ES NEGATIVO" << endl;
    }


    return 0;
}
