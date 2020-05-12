#include "iostream"

#include "cmath"

using namespace std;

int main(void)
{
    int a, b, c, potencia;
    float x1, x2;

    cout << endl;

    cout << "OBTENER “X” MEDIANTE LA FÓRMULA CUADRÁTICA." << endl << endl;

    cout << "Digite un valor para a: ";
    cin >> a;

    cout << "Digite un valor para b: ";
    cin >> b;

    cout << "Digite un valor para c: ";
    cin >> c;
    
    potencia = pow(b,2);
    
    x1 = (0 - b + (sqrt(potencia - (4 * a * c)))) / (2 * a);
    x2 = (0 - b - (sqrt(potencia - (4 * a * c)))) / (2 * a);

    cout << endl;

    cout << "Los resultados correspondientes a x, en la fórmula cuadrática, son: " << endl;
    cout << "resultado 1: " << x1 << endl;
    cout << "resultado 2: " << x2 << endl;
    
    cout << endl;

    return 0;
}