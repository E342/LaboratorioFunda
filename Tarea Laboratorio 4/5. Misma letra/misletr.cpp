#include "iostream"

#include "string"

using namespace std;

int main(void)
{
    string palabra ="";

    cout << endl;
    cout << "DETERMINAR SI LA PALABRA INGRESADA INICIA Y FINALIZA CON LA MISMA LETRA" << endl;

    cout << endl;
    cout << "Digite una palabra: ";
    cin >> palabra;

    int ultimaPos = palabra.length();

    cout << "Letra inicial: " << palabra[0] << endl;
    cout << "Letra final: " << palabra.at(ultimaPos-1)<< endl;

    if(palabra.at(ultimaPos-1) == palabra[0]){
      cout << palabra[0] << " y " << palabra.at(ultimaPos-1) << " son la misma letra." << endl;  
    }
    else {
        cout << palabra[0] << " y " << palabra.at(ultimaPos-1) << " son distintas letras." << endl;
    }
    cout << endl;
    
    return 0;
}
