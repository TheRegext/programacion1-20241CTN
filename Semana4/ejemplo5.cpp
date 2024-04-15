// Nombre:
// Apellido:
// Guía:
// N° EJ:
// Enunciado:

///HACER UN PROGRAMA PARA INGRESAR 10 NOTAS DE UN CURSO Y DETERMINAR Y MOSTRAR:
///1- EL PROMEDIO DE NOTAS
///2- EL PROMEDIO DE NOTAS DE LOS APROBADOS (>=6)

#include <iostream>

using namespace std;

int main()
{

    int i, num;
    int cont=0;
    for(i = 1; i <= 4; i++) {
        cout << "Ingrese #"<< i <<": ";
        cin >> num;

        if(num%2==0)
        {
            cont++;
        }
    }
    if(cont==4)
        cout << "SON TODOS PARES"<< endl;
    else if(cont > 0)
        cout << "HAY AL MENOS UN PAR"<< endl;
    else
        cout << "NO HAY PARES" << endl;

    return 0;
}
