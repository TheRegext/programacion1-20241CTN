#include <iostream>

using namespace std;

int main(){
   string nombre;
   int edad;


   // cout << "Ingrese edad: ";
   // cin >> edad;

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nombre);


    cout << "Nombre: " << nombre << " tiene " << edad <<" de edad"<<endl;

    return 0;
}
