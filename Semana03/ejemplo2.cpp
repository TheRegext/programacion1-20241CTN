/// Nombre:
/// Apellido:
/// Guia:
/// N° EJ:

#include <iostream>

using namespace std;

int main(){

    int edad;

    cout << "INGRESE SU EDAD ";
    cin >> edad;

    if(edad >= 18){
        cout << "ES MAYOR DE EDAD " << endl;
    }
    else{
        cout << "ES MENOR DE EDAD" << endl;
    }

    return 0;
}
