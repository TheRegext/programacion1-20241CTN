#include <iostream>
#include "juego.h"
#include "funciones.h"

using namespace std;

void juego()
{
    system("cls");

    /// TIRADA
    const int TAM = 6;
    int tirada[TAM];

    /// CARGAR TIRADA
    generarTirada(tirada, TAM);

    /// MOSTRAR TIRADA
    mostrarTirada(tirada, TAM);


    system("pause");
}
