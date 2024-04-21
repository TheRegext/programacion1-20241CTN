// Nombre:
// Apellido:
// Guía:
// N° EJ: 23
// Enunciado:  23

#include <iostream>

using namespace std;

int main(){

    int i, num;
    int cimpar = 0;
    int cdupla = 0;

    for(i = 1; i <= 10; i++){
        cout << "Ingrese numero: ";
        cin >> num;

        if(num%2 != 0){
            cimpar++;
            if(cimpar == 2){
                cdupla++;
                cimpar = 1;
            }
        }
        else{
            cimpar = 0;
        }
    }
    cout << "Total duplas impares consecutivos: " << cdupla << endl;

    return 0;
}
