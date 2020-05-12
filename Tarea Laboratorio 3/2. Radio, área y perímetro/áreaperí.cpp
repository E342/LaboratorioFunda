#include "iostream"

#include "cmath"

using namespace std;

int main(void)
{
    float n, potencia;
    double area, perimetro;
    const double PI = 3.141592653589793238463;

    cout << endl;

    cout << "OBTENER EL ÁREA Y PERÍMETRO DE UN CÍRCULO MEDIANTE SU RADIO" << endl << endl;

    cout << "Introduzca la equivalencia numérica del radio del círculo: ";
    cin >> n;

    potencia = pow(n,2);

    area = (double)PI * potencia;
    cout << "El área del círculo es: " << area << endl;

    perimetro = 2 * (double)PI * n;
    cout << "El perímetro del círculo es: " << perimetro << endl;
    
    cout << endl;

    return 0;
}