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
	
	int num1, num2, num3;
	int cont = 0;
	
	cout << "Ingrese #1: ";
	cin >> num1;
	
	cout << "Ingrese #2: ";
	cin >> num2;
	
	cout << "Ingrese #3: ";
	cin >> num3;
	
	cont = (num1%2 == 0) + (num2%2 == 0) + (num3%2 == 0);
	
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

