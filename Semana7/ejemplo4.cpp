/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

int main(){

    int codDestino, nroMes, cantPasajes, antDestino;
    float totalRec;

    /// PTO A
    int totalPasajes = 0;

    /// PTO B
    float totalRecPtoB;

    cout << "Cod. destino: ";
    cin >> codDestino;

    while( codDestino != 0){

        totalRecPtoB = 0;

        antDestino = codDestino;

        while( antDestino == codDestino){

            cout << "Nro, mes: ";
            cin >> nroMes;

            cout << "Cant pasajes: ";
            cin >> cantPasajes;

            cout << "Total rec: ";
            cin >> totalRec;

            /// PTO A
            totalPasajes += cantPasajes;

            /// PTO B
            totalRecPtoB += totalRec;

            ///

            cout << "Cod. destino: ";
            cin >> codDestino;
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
