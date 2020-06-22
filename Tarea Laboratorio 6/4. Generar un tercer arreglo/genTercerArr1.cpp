#include "iostream"

using namespace std;

void leerArreglo(int[30], int[30], int, int);
void sumaArreglos(int[30], int[30], int[30], int, int);
void desplegarArreglo(int[30], int, int);

int main(void)
{
    int arr1[30];
    int arr2[30];
    int arrSuma[30];
    int i;
    int n;
    

    cout << endl;
    cout << "GENERAR UN TERCER ARREGLO AL SUMAR LAS MISMAS POSICIONES DE DOS ARREGLOS" << endl << endl;

    leerArreglo(arr1, arr2, i, n);
    sumaArreglos(arr1, arr2, arrSuma, i, n);
    desplegarArreglo(arrSuma, i, n);
    
    cout << endl;

    return 0;
}

void leerArreglo(int arr1[30], int arr2[30], int i, int n)
{
    cout << "¿Cuántos elementos desea introducir en ambos arreglos? ";
    cin >> n;

    cout << endl;
    cout << "Arreglo 1" << endl << endl;
    cout << "Digite los " << n << " elementos del arreglo:" << endl;
    for(i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cout << endl;
    cout << "Arreglo 2" << endl << endl;
    cout << "Digite los " << n << " elementos del arreglo:" << endl;
    for(i = 0; i < n; i++){
        cin >> arr2[i];
    }
}

void sumaArreglos(int arr1[30], int arr2[30], int arrSuma[30], int i, int n)
{
     for(i = 0; i < n; i++){
        arrSuma[i] = arr1[i] + arr2[i];
    }
}

void desplegarArreglo(int arrSuma[30], int i, int n)
{
    cout << endl;
    cout << "El tercer arreglo, correspondiente a la suma de las mismas posiciones" << endl;
    cout << "de los elementos pertenecientes a los arreglos anteriores, es: "<< endl;
    for(i = 0; i < n; i++){
        cout <<  arrSuma[i]  << " ";
    }
}