#include "iostream"

using namespace std;

int main(void)
{
    int n;
    
    cout << endl;
    cout << "VERIFICAR SI UN NÚMERO ES PAR O IMPAR" << endl << endl;
    
    cout << "Digite un número entero: ";
    cin >> n;
    
    if(n % 2 == 0){
        cout << n << " es un número par." << endl;
    }
    else{
        cout << n << " es un número impar." << endl;
    }
    
    cout << endl;
    return 0;
}