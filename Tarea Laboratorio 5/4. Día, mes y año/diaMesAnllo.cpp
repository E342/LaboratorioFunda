#include "iostream"

using namespace std;

bool funcionBooleana(int a){

    return ((a % 4) == 0 && (a % 100) != 0) || ((a % 400) == 0);
}

int funcionEntera(int m, int a){

    int d = 31;
    if (m == 4 || m == 6 || m == 9 || m == 11){
        d = 30;
    }
    else if ( m == 2 ){
        if (funcionBooleana(a)){
            d = 29;
        }
        else{
            d=28;
        }
    }
    return d;
}

int main (){
    
    int d, m, a;

    cout << endl;
    cout << "CALCULADOR DEL DÍA SIGUIENTE A LA FECHA INTRODUCIDA" << endl;
    cout << endl;
    
    cout << "Introduzca el día: ";
    cin >> d;
    cout << "Introduzca el mes: ";
    cin >> m;
    cout << "Introduzca el año: ";
    cin >> a;
    
    d+=1;
    if (d > (funcionEntera(m, a))){
        d = 1;
        m+=1;
        if (m  > 12){
            m = 1;
            a+=1;
        }
    }
    cout << endl;
    cout << "Luego de un día después la fecha será: " << d << "/" << m << "/" << a << "." << endl;
    cout << endl;

    return 0;
}