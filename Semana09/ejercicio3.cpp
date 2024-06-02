/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

/// DECLARACION DE LA FUNCION

int SumarDosNumeros(int num1, int num2);

int main(){

    int num1, num2;
    cout << "Ingrese #:";
    cin >> num1;

    cout << "Ingrese #:";
    cin >> num2;

    int resultado = SumarDosNumeros(num1,num2);

    cout << resultado << endl;

    return 0;
}

/// IMPLEMENTACION DE LA FUNCION

int SumarDosNumeros(int num1, int num2){
    int resultado = num1 + num2;
    return resultado;
}
