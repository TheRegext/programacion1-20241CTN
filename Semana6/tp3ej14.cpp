// Nombre:
// Apellido:
// Guía: 3
// N° EJ: 14
// Enunciado:

/**

Dada una lista de 7 números informar cual es el primer, el segundo, el
anteúltimo y el último número impar ingresado.

Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
Anteúltimo impar: 9 y Último impar: 5.

*/
#include <iostream>

using namespace std;

int main(){

    int i, num, ultimoImpar, primerImpar, segundoImpar,     anteultimoImpar;
    int cuentaImpar = 0;

    for (i = 1; i <= 7; i++){
        cout << "Ingrese #: ";
        cin >> num;

        /// VERIFICO SI ES IMPAR
        if ( num%2 != 0){
            cuentaImpar++;
            if(cuentaImpar == 1){
                primerImpar = num;
            }
            if(cuentaImpar == 2){
                segundoImpar = num;
            }
            anteultimoImpar = ultimoImpar;
            ultimoImpar = num;
            /// impares
        }
    }
    if(cuentaImpar==1){
    cout << "Primer impar " << primerImpar << endl;
    cout << "Ultimo impar " << ultimoImpar << endl;
    }
    else if( cuentaImpar > 1){
        cout << "Primer impar " << primerImpar << endl;
        cout << "Segundo impar " << segundoImpar << endl;
        cout << "Anteultimo impar " << anteultimoImpar << endl;
        cout << "Ultimo impar " << ultimoImpar << endl;
    }
    else{
        cout << "Lista sin impares" << endl;
    }


    return 0;
}
