// Nombre:
// Apellido:
// Guía:
// N° EJ:
// Enunciado:

#include <iostream>

using namespace std;

int main(){

//    int i = 1;
//
//    while( i <= 10){
//        cout << i <<endl;
//        i++;
//    }

//    int i = 10;
//    while (i >= 1){
//        cout << i << endl;
//        i--;
//    }
    int edad;

    do{
       cout << "Ingrese su edad: ";
       cin >> edad;
    }
    while( edad <= 0);

    return 0;
}
