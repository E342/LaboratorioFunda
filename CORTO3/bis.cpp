#include "iostream"

using namespace std;

bool bisiesto(int year){
    /* Fución "bool" utilizada con el fin de evaluar si las cifras 
    ingresadas cumplen con las condiciones.*/

    if ((year % 400) == 0){
        return true;
    /* El año es bisiesto si es divisible entre 400, por lo tanto
    el residuo de la división debe ser igual a 0.*/
    }
    else if (((year % 4) == 0) && ((year % 100) != 0)){
        return true;
    }
    /* El año es bisiesto si es divisible entre 4 y no sea divisible entre 100,
    por lo tanto el residuo de la división debe ser igual a 0.*/
    else{
        return false;
    }
    /* El año no es bisiesto si no cumple al menos una de las condiciones anteriores,
    por lo tanto el residuo de la división debe ser diferente de 0.*/
}

int main(){
    int year;
    cout << "Ingrese el año: ";
    cin >> year;

    if ((bisiesto(year)) == true){
        cout << "El año es bisiesto." << endl;
    }
    /* El año es bisiesto si alguna de las condiciones
    retornan el valor booleano "true".*/
    else{
        cout << "El año no es bisiesto." << endl;
    }
    /* Si alguna de las condiciones retorna el valor
    booleano "false", el año no es bisiesto.*/
    return 0;
}
 