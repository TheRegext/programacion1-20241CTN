/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>

using namespace std;

/// FUNCIONES

void cargarVector(int vec[], int tam);
int obtenerSuma(int vec[], int tam);
float obtenerPromedio(int vec[], int tam);
int obtenerCantidadMayorNumero(int vec[], int tam, float num);

int main(){
    float promedio;
    int cantMayores;

    const int TAM = 5;

    int vecEnteros[TAM];

    /// CARGAR VECTOR
    cargarVector(vecEnteros,TAM);

    /// OBTENER PROMEDIO
    promedio =obtenerPromedio(vecEnteros,TAM);

    /// OBTENER CANTIDAD MAYORES AL PROMEDIO
    cantMayores = obtenerCantidadMayorNumero(vecEnteros,TAM,promedio);

    /// MOSTRAR CANTIDAD MAYORES AL PROMEDIO
    cout << "Total de Nros mayores al prom: " << cantMayores << endl;


    return 0;
}

void cargarVector(int vec[], int tam){
    int numero;
    for(int i = 0; i < tam; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;
        vec[i] = numero;
    }
}

int obtenerSuma(int vec[], int tam){
    int acu = 0;
    for(int i = 0; i < tam; i++){
        acu += vec[i];
    }
    return acu;
}

float obtenerPromedio(int vec[], int tam){
    float promedio;
    promedio = (float)(obtenerSuma(vec, tam))/tam;
    return promedio;
}

int obtenerCantidadMayorNumero(int vec[], int tam, float num){
    int cant = 0;
    for(int i = 0; i < tam; i++){
        if(vec[i] > num){
            cant++;
        }
    }
    return cant;
}
