#include "iostream"

using namespace std;

int main(void)
{
    int a, b, c;
    float promedio; 

    cout << endl;

    cout << "OBTENER EL PROMEDIO DE TRES NÚMEROS ENTEROS" << endl << endl;

    cout << "Digite el primer número: ";
    cin >> a;

    cout << "Digite el segundo número: ";
    cin >> b;

    cout << "Digite el tercer número: ";
    cin >> c;

    promedio = (float)(a + b + c)/3;
    cout << "El promedio de los tres números es: " << promedio << endl;
    
    cout << endl;

    return 0;
}