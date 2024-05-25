/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

int main(){

    int numero;
    int acuEnteros = 0;
    float promedio;
    int numMayoresPromedio = 0;

    const int TAM = 5;

    int vecEnteros[TAM];

    /// CARGAR VECTOR
    for(int i = 0; i < TAM; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;
        vecEnteros[i] = numero;
    }

    /// ACUMULAR
    for(int i = 0; i < TAM; i++){
        acuEnteros += vecEnteros[i];
    }

    /// OBTENER PROMEDIO
    promedio =(float)acuEnteros/TAM;


    /// CONTAR CANTIDAD VALORES MAYORES AL PROM
    for(int i = 0; i < TAM; i++){
        if(vecEnteros[i] > promedio){
            numMayoresPromedio++;
        }
    }

    cout << "Total de Nros mayores al prom: " << numMayoresPromedio << endl;

    return 0;
}
