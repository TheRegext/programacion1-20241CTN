/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

int Redondear(float num);

int main(){

    cout << "El numero redondeado es: " << Redondear(7.54) << endl;

    return 0;
}

int Redondear(float num){
    int entero = num;

    ///float diferencia = num-entero;

    if((num-entero) >= 0.50){
        entero +=1 ;
    }
    return entero;
}
