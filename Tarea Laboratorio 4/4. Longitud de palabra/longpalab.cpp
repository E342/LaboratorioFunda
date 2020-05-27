#include "iostream"

#include "string"

using namespace std;

int main(void)
{
    int longitud;
    string palabra;
    
    cout << endl;
    cout << "VERIFICAR SI UNA PALABRA ES MAYOR A 10 CARACTERES O NO Y SI ES PAR O IMPAR" << endl << endl;
    
    cout << "Digite una palabra: ";
    cin >> palabra;

    longitud = palabra.length();

    cout << "La palabra tiene una longitud de: " << longitud << " caracteres" << endl;

    if((palabra.length())<10){
        cout << "La palabra tiene una longitud menor a 10 caracteres." << endl;
    }
    else{
        cout << "La palabra tiene una longitud mayor a 10 caracteres." << endl;
    }
    if((palabra.length()) % 2 == 0){
        cout << "La palabra tiene un número par de caracteres." << endl;
    }         
    else{
        cout << "La palabra tiene un número impar de caracteres." << endl;
    }
         
    cout << endl;
    return 0;
}