#include "iostream"

using namespace std;

int main()
{
    int h, m, s;

    cout << endl;
    cout << "DETERMINAR HORA UN SEGUNDO DESPUÉS" << endl;
    cout << endl;

    cout << "Introduzca horas: ";
    cin >> h;
    cout << "Introduzca minutos: ";
    cin >> m;
    cout << "Introduzca segundos: ";
    cin >> s;
    cout << endl;

    if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59))
    {
        s+=1;
        if ( s == 60 )
        {
            s = 0;
            m+=1;
            if ( m == 60 )
            {
                m = 0;
                h+=1;
                if ( h == 24 )
                    h = 0;
            }
        }
        cout << "Luego de un segundo después la hora será: " << h << ":" << m << ":" << s << endl;
        cout << endl;
    }
    else{
        cout << "Los datos introducidos son inválidos." << endl;
        cout << endl;
    }
    return 0;
}