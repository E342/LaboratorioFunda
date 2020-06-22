#include "iostream"

using namespace std;

int main(){
    int arr[30], i, n, m, cont;

    cout << endl;
    cout << "CONTAR CUANTAS VECES SE REPITE UN NÚMERO EN EL ARREGLO" << endl << endl;

    cout << "¿Cuántos elementos desea introducir en el arreglo? ";
    cin >> n;

    
    cout << endl;
    cout << "Digite los " << n << " elementos del arreglo:" << endl;
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    cont = 0;
    cout << "Digite el número del cual desea saber cuantas veces se repite: ";
    cin >> m;
    for(i = 0; i < n; i++){
        if(m == arr[i]){
            cont++;
        }
	}
    cout << endl;
    cout << "El elemento " << m << " se repite: " << cont << endl;

    return 0;
} 
