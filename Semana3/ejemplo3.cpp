/// Nombre:
/// Apellido:
/// Guía: 2
/// N° EJ: 19


/// Enunciado:
/// Este ejercicio lo resolverán en la parte de código de la materia.

/// El costo de un desarrollo de un proyecto de software se calcula
/// en base al lenguaje que se necesita:

/// Nombre
/// Tipo
/// Valor hora
/// C/C++
/// 'C'
/// $ 7500
/// C#
/// '#'
/// $ 6100
/// Python
/// 'P'
/// $ 5400
/// Go
/// 'G'
/// $ 5000


/// Además, si el proyecto es marcado como Urgente, se le aumenta un
/// 120 % más al costo del proyecto.

/// Le solicitan un programa que permita calcular el costo total de
/// un proyecto basado en la cantidad de horas (int), el tipo de
/// lenguaje (char) y si es urgente o no (bool)


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int cantidadHoras;
    char tipoLenguaje;
    bool esUrgente = 0;
    float costoTotal;
    float valorHora;

    cout << "INGRESE LA CANTIDAD DE HORAS: ";
    cin >> cantidadHoras;

    cout << "INGRESE TIPO DE LENGUAJE: ";
    cin >> tipoLenguaje;

    cout << "ES URGENTE (1-> SI, 0-> NO): ";
    cin >> esUrgente;

    switch(tipoLenguaje){
    case 'C':
    case 'c':
        valorHora = 7500;
        break;
    case '#':
        valorHora = 6100;
        break;
    case 'P':
    case 'p':
        valorHora = 5400;
        break;
    case 'G':
    case 'g':
        valorHora = 5000;
        break;
    default:
        cout << "NO TRABAJAMOS CON ESE LENGUAJE!!!!" << endl;
        break;
    }

    costoTotal = cantidadHoras*valorHora;
    if(esUrgente == true){
        costoTotal = costoTotal*2.2;
    }

    cout << "COSTO TOTAL: " << fixed << setprecision(2) << costoTotal;

    return 0;
}
