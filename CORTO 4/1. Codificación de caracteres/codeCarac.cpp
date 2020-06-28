#include "iostream"
#include "string.h"

using namespace std;

void contElementArr(char a[], int &longitud);
void desplegarArreglo (char a[ ], int);

int main(void)
{
    char a[30];
    int longitud;

    cout << endl;
    cout << "CODIFICAR UN ARREGLO DE CARACTERES" << endl;
    cout << endl;

    cout << "Escriba una frase, puede incluir espacios: " << endl;
    scanf ("%[^\n]", &a);

    contElementArr(a, longitud);
    desplegarArreglo(a, longitud);

    cout << endl;
    return 0;
}

void contElementArr(char x[], int &longitud)
{
    longitud = strlen(x);
}

void desplegarArreglo(char x[ ], int longitud)
{
    int i;

    cout << endl;
    cout << "La frase codificada se muestra de la siguiente manera: " << endl;
    for(i = 0; i < longitud; i++)
    {
        if(x[i]=='m' || x[i]=='M'){
            cout <<'0';
        }
        else if (x[i]=='u' || x[i]=='U'){
            cout <<'1';
        }
        else if (x[i]=='r' || x[i]=='R'){
            cout <<'2';
        }
        else if (x[i]=='c' || x[i]=='C'){
            cout <<'3';
        }
        else if (x[i]=='i' || x[i]=='I'){
            cout <<'4';
        }
        else if (x[i]=='e' || x[i]=='E'){
            cout <<'5';
        }
        else if (x[i]=='l' || x[i]=='L'){
            cout <<'6';
        }
        else if (x[i]=='a' || x[i]=='A'){
            cout <<'7';
        }
        else if (x[i]=='g' || x[i]=='G'){
            cout <<'8';
        }
        else if (x[i]=='o' || x[i]=='O'){
            cout <<'9';
        }
        else if (x[i]==' '){
            cout <<' ';
        }
        else{
            cout << x[i];
        }
    }
    cout << x[i];
}