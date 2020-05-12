#include "iostream"

#include "string"

using namespace std;

int main(void)
{
    int cantidad;
    float n, precio;
    string nombre, apellido, consumidor, producto;

    cout << endl;

    cout << "COMPRA REALIZADA" << endl << endl;
    
    cout << "Introduzca los datos del comprador: " << endl;
    
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Comsumidor: " << nombre << " " << apellido << endl << endl;

    cout << "Introduzca la cantidad de unidades del producto: ";
    cin >> cantidad;
    cout << "Introduzca el nombre o tipo de producto: ";
    cin >> producto;
    cout << "Introduzca el precio del producto: $";
    cin >> n;
    
    precio = (float)n * cantidad; 
    cout << "Detalles de la compra: " <<cantidad << " " << producto << " - " << "$" << precio << endl << endl;

    cout << "Total de dinero gastado: " << "$" << precio << endl;
    
    cout << endl;

    return 0;
}