#include <iostream>
using namespace std;
/*
HACER UN PROGRAMA QUE PERMITA INGRESAR TRES NUMEROS E INFORME:
- SI SON TODOS PARES
- HAY AL MENOS UN NUMERO PAR
- NO HAY NINGUN NUMERO PAR


// ACUMULADOR

//	ACU = ACU + VAR
//  ACU += VAR

// CONTADOR

// CONT = CONT + 1
// CONT += 1
// CONT++
*/
int main(int argc, char *argv[]) {
	
	int num1;
	int cont = 0;
	
	cout << "Ingrese #1: ";
	cin >> num1;
	
	if(num1%2 == 0){
		cont++;
		/// cont = cont - 2
		/// cont -= 2
	}
	
	cout << "Ingrese #2: ";
	cin >> num1;
	
	if(num1%2 == 0){
		cont++;
	}
	
	cout << "Ingrese #3: ";
	cin >> num1;
	
	if(num1%2 == 0){
		cont++;
	}
	
	if(cont == 3){
		cout << "SON TODOS PARES" << endl;
	}
	else if( cont > 0){
		cout << "AL MENOS UN PAR" << endl;
	}
	else{
		cout << "SIN PARES" << endl;
	}
	
	
	
	
	return 0;
}

