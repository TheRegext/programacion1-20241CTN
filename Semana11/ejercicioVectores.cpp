/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

/**
Una fábrica dispone de 5 tipos de piezas.

Nos piden hacer un programa donde se carguen las producciones de la fábrica.
Por cada producción se pide:

- tipo de pieza (1 a 5)
- cantidad producida.

El programa debe finalizar cuando se ingresa un tipo de pieza igual a cero.

Mostrar, para cada pieza, la cantidad producida.

*/

#include <iostream>

using namespace std;

int main()
{

    int nroPieza, cantProducida;

    /// DECLARO Y PONGO EN CERO EL VECTOR
    int vProduccion[5]={};

    cout << "Numero pieza: ";
    cin >> nroPieza;

    while ( nroPieza != 0)
    {
        cout << "Cantidad producida: ";
        cin >> cantProducida;

        /**
        switch()
        {
        case 1:
            vec[0]+=cantProducida;
            break;
        case 2:
            vec[1]+=cantProducida;

            break;
        case 3:
            vec[2]+=cantProducida;
            break;
        case 4:
            vec[3]+=cantProducida;
            break;
        case 5:
            vec[4]+=cantProducida;
            break;
        }
        */

        /// ACUMULO LA PRODUCIDO SEGUN TIPO DE PIEZA
        vProduccion[nroPieza-1] += cantProducida;

        ///
        cout << "Numero pieza: ";
        cin >> nroPieza;
    }

    for(int i = 0; i < 5; i++){
        cout << "De la pieza #" << i+1 << " se produjo " << vProduccion[i] << endl;
    }

    return 0;
}
