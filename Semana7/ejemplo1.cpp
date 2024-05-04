/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

int main(){

    int destinos;
    int meses;
    int codDestino, nroMes, cantPasajes;
    float totalRec;

    /// PTO A
    int totalPasajes = 0;

    /// PTO B
    float totalRecPtoB;

    for (destinos = 1; destinos <= 5; destinos++){

        totalRecPtoB = 0;

        for(meses = 1; meses <= 12; meses++){
            cout << "Cod. destino: ";
            cin >> codDestino;

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
