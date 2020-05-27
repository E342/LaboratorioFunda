#include "iostream"

using namespace std;

int main(void)
{
    float n;
    
    cout << endl;
    cout << "VERIFICAR SI UN NÚMERO ES POSITIVO, NEGATIVO O CERO" << endl << endl;
    
    cout << "Digite un número: ";
    cin >> n;
    
    if(n){
        if(n<0){
            cout << n << " es un número negativo." << endl;
        }
        if(n>0){
            cout << n << " es un número positivo." << endl;
        }
    }
    else{
        cout << n << " es un número igual a 0." << endl;
    }
    
    
    cout << endl;
    return 0;
}