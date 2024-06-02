/// Nombre:
/// Apellido:
/// Guía:
/// N° EJ:
/// Enunciado:

#include <iostream>
#include <ctime>

using namespace std;

int tirarDado();
void generarTirada(int v[], int tam);
void mostrarTirada(int v[], int tam);

int main(){

    /// SEMILLA - SEED
    srand(time(0));

    /// TIRADA
    const int TAM = 6;
    int tirada[TAM];

    /// CARGAR TIRADA
    generarTirada(tirada, TAM);

    /// MOSTRAR TIRADA
    mostrarTirada(tirada, TAM);

    return 0;
}

int tirarDado(){
    return rand()% 6 + 1;
}

void generarTirada(int v[], int tam){
    for (int i= 0; i < tam; i++){
        v[i] = tirarDado();
    }
}

void mostrarTirada(int v[], int tam){
    for (int i= 0; i < tam; i++){
        cout << "Dado #" << i+1 << " :" << v[i] << endl;
    }
}
