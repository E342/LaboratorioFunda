#include "iostream"

using namespace std;

void CalSalarios()
{
    int n, m;
    float horaTrab, horaExt, salTotal, salReal, ISSS, AFP, resta, renta;

    cout << endl;

    cout << "Horas trabajadas: ";
    cin >> n;

    cout << "Horas extras realizadas: ";
    cin >> m;

    cout << endl;

    horaTrab = n * 1.75;
    horaExt = m * 2.50;

    salTotal = horaTrab + horaExt;

    ISSS = salTotal * 0.04;
    AFP = salTotal * 0.0625;
    resta = salTotal - (ISSS + AFP);
    renta = 0;
    if(resta){
     if(resta>500){
         renta = resta * 0.1;
     }
     else{
         if(salTotal<=500){
             renta = 0;
         }            
     }
    }

    salReal = salTotal - (ISSS + AFP + renta);

    cout << "El salario total es igual a: $" << salTotal << endl;
    cout << "El salario real es igual a: $" << salReal << endl;
    cout << endl;
}

int main(){
int opcion=0;

    cout << endl;
    cout << "CALCULADOR DE SALARIOS MENSUALES" << endl;
    cout << endl;

    do {
        cout << "Menú de opciones:" << endl;
        cout << "1--------Calcular salario mensual"<<endl;
        cout << "2--------Salir"<<endl<<endl;

        cout << "Elija una opción: ";
        cin >> opcion;
        cout << endl;

        if(opcion){
            if(opcion==1){
                CalSalarios();
            }
            else{
                if(opcion>2){
                    cout << "ingrese una opción válida." << endl;
                }
            }
        }
    }while (opcion!=2);

    cout << endl;
    cout << "Usted ha salido del calculador de salarios mensuales";
    
    return 0;
}