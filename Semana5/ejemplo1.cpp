// Nombre:
// Apellido:
// Guía:
// N° EJ:
// Enunciado:

#include <iostream>

using namespace std;

int main(){
    int i, nota;
    float promedio;
    ///PUNTO a)
    int notasAcumuladas=0;
    ///PUNTO b)
    int aprobados=0;
    int notasAprobadas=0;
    ///PUNTO c)
    bool nota5=0;

    for(i=0;i<10;i++){

    cout<< "Ingrese notas: ";
    cin>> nota;
    notasAcumuladas+=nota;

    if(nota>=6){
        aprobados++;
        notasAprobadas+=nota;
    }
    if(nota==5){
        nota5=1;
    }
    }

    promedio=(float)notasAcumuladas/10;

    cout<< "a)promedio de notas: "<< promedio;

    cout<<endl;
    if(aprobados>0){
    promedio=(float)notasAprobadas/aprobados;

    cout<< "b) promedio notas de aprobados "<<promedio;}
    else{
        cout<< "No hubo aprobados! :(";
    }
    cout<<endl;
    if(nota5==1){
        cout<<"Hubo al menos un alumno con un 5 :/";

    }
    else{
        cout<<"No hubo ningun 5!!";
    }
    return 0;
}
