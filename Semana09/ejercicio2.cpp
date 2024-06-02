/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

/// DECLARACION DE LA FUNCION

void MostrarPositivo(int num);

int main(){

    int numero;

    cout << "Ingresar #: ";
    cin >> numero;
    MostrarPositivo(numero);


    return 0;
}

/// IMPLEMENTACION DE LA FUNCION

void MostrarPositivo(int num){
    if(num > 0){
        cout << "El numero " << num << " es positivo" << endl;
    }
}

