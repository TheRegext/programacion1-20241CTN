#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    float resultado;

    num1 = 15;
    num2 = 12;

    resultado = num1/num2;

    cout << "RESULTADO ENTRE ENTEROS 15 / 12 : " << resultado << endl;

    resultado = (float)num1/num2;

    cout << endl;

    cout << "RESULTADO ENTRE ENTEROS 5 / 2 CASTEADO: " << resultado << endl;

    cout << endl;

    resultado = num1 % num2;

    cout << "RESULTADO DE " << num1 << " % " << num2 << " ES: " << resultado << endl;

    cout << endl;

    float num3, num4;

    num3 = 5;
    num4 = 2;

    resultado = num3/num4;

    cout << "RESULTADO ENTRE FLOTANTES: " << resultado << endl;

    cout << endl;

    cout << 20.0f/3;

    cout << endl;

    cout << 15.0f/12;

    return 0;
}
