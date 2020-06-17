#include "iostream"

using namespace std;

int minimoComunDivisor(){
    
    int mayor, menor, resDiv;

    cout << endl;
    cout << "MÍNIMO COMÚN DIVISOR (MCD) DE DOS NÚMEROS ENTEROS" << endl;
    cout << endl;
    
    cout << "Digite el número mayor: ";
    cin >> mayor;
    cout << "Digite el número menor: ";
    cin >> menor;

    do{
        resDiv = mayor % menor;
        if(resDiv != 0){
            mayor = menor;
            menor = resDiv;
        }
    }while(resDiv != 0);
    
    return menor;
}

int main()
{
    int aux = minimoComunDivisor();
        cout << endl;
        cout << "El mínimo común divisor es: " << aux << endl;
        cout << endl;

    return 0;
}