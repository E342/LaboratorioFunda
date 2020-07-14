#include "iostream"
#include "string"
#include "string.h"

const int longCad = 20; 

using namespace std;

struct costoPorArticulo{ //Estructura del programa
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};
//Declaracíon de funciones a utilizar a lo largo del programa.
void calcularCostArticulo (costoPorArticulo listado[], int);
void llenarDatoArticulo(costoPorArticulo listado[], int);
void calcularCostArticulo (costoPorArticulo listado[], int); 
void desplegarDatoArticulo(costoPorArticulo listado[], int);
float totalCompra(costoPorArticulo listado[], int);

int main(void)
{
    int articuloComprado;
    
    cout << endl << "PROCESAMIENTO DE FACTURA DE COMPRA" << endl << endl;
    
    cout << "Introduzca la cantidad de artículos a comprar: ";
    cin >> articuloComprado;
    //Funciones citadas
    costoPorArticulo preservar[articuloComprado];
    llenarDatoArticulo(preservar, articuloComprado);   
    calcularCostArticulo(preservar, articuloComprado); 
    desplegarDatoArticulo(preservar, articuloComprado);
    
    cout << endl << "Total de la compra: $" << totalCompra(preservar, articuloComprado) << endl << endl;
    
    return 0;
}

void llenarDatoArticulo(costoPorArticulo listado[], int n) //Ingreso de datos de los artículos.
{
    cout << endl << "Digite el nombre, la cantidad y el precio unitario de cada artículo:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << endl << "> Artículo " << i + 1 << ": " << endl;
        cin.ignore(100, '\n');
        cout << "Nombre o tipo: ";
        cin.getline(listado[i].nombreArticulo, 21, '\n');
        cout << "Cantidad: ";
        cin >> listado[i].cantidad;
        cout << "Precio unitario: $";
        cin >> listado[i].precio;
        cout << "............................."<< endl;// Separador
    }
}

void calcularCostArticulo(costoPorArticulo listado[], int n) //Calculo del costo por tipo o clase de artículo.
{
    for(int i = 0; i < n; i++){
        //Cantidad del artículo multiplicada por su precio unitario.
        listado[i].costoPorArticulo = listado[i].cantidad * listado[i].precio;
    }
}

void desplegarDatoArticulo(costoPorArticulo listado[], int n)//Impresion de datos de los artículos y costo por artículo.
{
    cout << endl << "LISTADO DE PRODUCTOS COMPRADOS: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << endl << "Artículo " << i + 1 << ": ";
        cout << listado[i].nombreArticulo << " / ";
        cout << "Cantidad: " << listado[i].cantidad << " / ";
        cout << "Precio unitario: $" << listado[i].precio << " / ";
        cout << "Costo total: ";
        cout << "$" << listado[i].costoPorArticulo << endl;
        cout << "....................................................................................";// Separador
    }
}

float totalCompra(costoPorArticulo listado[], int n)
{
    float suma=0;
    for(int i = 0; i < n; i++)
    {
       suma = suma + listado[i].costoPorArticulo; //Suma de los costos de cada artículo.
    }
    
    return suma; // Retorna el valor generado "suma", que refiera al total de la compra.
}