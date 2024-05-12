/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

int main()
{

    int nroArt, dia, cantUnidades, numArtAct;
    float imp;

    /// PTO A
    int acuUnidVend;
    int maxCantVend = 0;
    int maxArticulo;

    /// PTO B
    float acuImportes;

    /// PTO C
    int quincena;
    int acuQ1 = 0;
    int acuQ2 = 0;

    /// PTO D
    int maxCantVentInd = 0;
    int maxDia;
    int maxArtVentInd;

    cout << "Ingrese # articulo: ";
    cin >> nroArt;

    while ( nroArt != 0 )
    {
        /// PTO A
        acuUnidVend = 0;

        /// PTO B
        acuImportes = 0;

        numArtAct = nroArt;

        while (numArtAct == nroArt)
        {
            cout << "Ingrese dia venta: ";
            cin >> dia;

            cout << "Ingrese cantidad unidades: ";
            cin >> cantUnidades;

            cout << "Ingrese importe venta: ";
            cin >> imp;

            /// LECTURA DE CADA REGISTRO
            /// PTO A
            if(dia < 16){
                acuUnidVend += cantUnidades;
            }
            /// PTO B
            acuImportes += imp;

            /// PTO C
            if (dia > 15){
                acuQ2 += cantUnidades;
            }
            else{
                acuQ1 += cantUnidades;
            }
            /// PTO D
            if(cantUnidades > maxCantVentInd){
                maxCantVentInd = cantUnidades;
                maxDia= dia;
                maxArtVentInd = numArtAct;
            }

            ///
            cout << "Ingrese # articulo: ";
            cin >> nroArt;
        }

        ///  PTO A
        if(acuUnidVend > maxCantVend){
            maxCantVend = acuUnidVend;
            maxArticulo = numArtAct;
        }

        /// PTO B
        cout << endl;
        cout << "PTO B) El art. " << numArtAct  << " recaudo $:" << acuImportes << endl;



    }
    cout << endl;
    cout << "PTO A) Art. con mayor cant. vendida en Q1 es: " << maxArticulo << endl;

    /// PTO C
    if(acuQ1 > acuQ2){
        quincena = 1;
    }
    else{
        quincena = 2;
    }
    cout << endl;
    cout << "PTO C) La quincena con > cant. vend. fue: " << quincena << endl;

    /// PTO D
    cout << endl;
    cout << "El art con > cant. vta. ind fue: " << maxArtVentInd << " en el dia " <<  maxDia << endl;



    return 0;
}
