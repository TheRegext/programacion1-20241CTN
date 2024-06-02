/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

int main(){

    int destinos;
    int codDestino, nroMes, cantPasajes;
    float totalRec;

    /// PTO A
    int totalPasajes = 0;

    /// PTO B
    float totalRecPtoB;

    for (destinos = 1; destinos <= 5; destinos++){

        totalRecPtoB = 0;

        cout << "Cod. destino: ";
        cin >> codDestino;

        cout << "Nro, mes: ";
        cin >> nroMes;

        while( nroMes != 0){

            cout << "Cant pasajes: ";
            cin >> cantPasajes;

            cout << "Total rec: ";
            cin >> totalRec;

            /// PTO A
            totalPasajes += cantPasajes;

            /// PTO B
            totalRecPtoB += totalRec;

            ///

            cout << "Nro, mes: ";
            cin >> nroMes;
        }
            cout << endl;

            cout << "PTO B " << endl;
            cout << "     " << totalRecPtoB << endl;
    }

    cout << endl;

    cout << "PTO A" << endl;
    cout << "     " << totalPasajes << endl;

    return 0;
}
