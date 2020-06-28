#include "iostream"

using namespace std;

void llenarMatriz(float a[ ][5], int);
void desplNotFinal(float a[ ][5], int);

int main(void)
{
    int cantEstud=0;

    cout << endl;
    cout << "CALCULAR LA NOTA FINAL DE CADA ESTUDIANTE Y DETERMINAR SI APROBÓ O NO" << endl;
    cout << endl;

    cout << "Ingrese la cantidad de estudiantes: " << endl;
    cin >> cantEstud;

    float notas[cantEstud][5];
    llenarMatriz(notas, cantEstud);
    desplNotFinal(notas, cantEstud);

    return 0;
}

void llenarMatriz(float a[][5], int cant)
{
    float calificacion;
    int i, j;
    for(i = 0; i < cant; i++){
        for(j = 0; j < 5; j++){
            cout << "Ingrese la calificación "<<(j+1)<<" del estudiantes " <<(i+1) << endl;
            cin >> calificacion;
            a[i][j] = calificacion;
        }
        cout << endl;
    }      
}
void desplNotFinal(float a[][5], int cant)
{
    float notfinal;
    int i, j;
    for(i = 0; i < cant; i++){
        for(j = 0; j < 5; j++){
            notfinal+=((a[i][j])*0.20);
        }
        cout << "La nota final del estudiante" <<(j+1)<<" es: "<< notfinal << endl;
        if (notfinal >= 6){
            cout << "El estudiante aprobó."<< endl << endl;
        }
        else {
            cout << "El estudiante reprobó."<< endl << endl;
        }
    notfinal=0;
    }
}