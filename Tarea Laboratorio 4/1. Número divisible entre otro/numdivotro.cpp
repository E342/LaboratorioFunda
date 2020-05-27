#include "iostream"

using namespace std;

int main(void)
{
    int numerador, denominador;
    float x;

    cout << endl;
    cout << "¿UN NÚMERO ES DIVISIBLE ENTRE OTRO?" << endl << endl;
    
    cout << "Digite el numerador: ";
    cin >> numerador;
    cout << "Digite el denominador: ";
    cin >> denominador;

    cout << endl;

    if (numerador % denominador == 0){
        x = numerador / denominador;
        cout << "La división es igual a: " << x << endl;
        cout << numerador << " si es divisible entre " << denominador << "." << endl;
    }
    else
    {
        x = (float)numerador / denominador;
        cout << "La división es a: " << x << endl;
        cout << numerador << " no es divisible entre " << denominador << "." << endl;
    }
    cout << endl;
    return 0;
}