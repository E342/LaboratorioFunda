#include "iostream"

using namespace std;

bool funcionBooleana(int year){

    if ((year % 400) == 0){
        return true;
    }
    else if (((year % 4) == 0) && ((year % 100) != 0)){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    
    int year;
    
    cout << endl;
    cout << "DETERMINAR SI UN AÑO ES BISIESTO O NO LO ES" << endl;
    cout << endl;
    
    cout << "Ingrese el año: ";
    cin >> year;
    cout << endl;

    if ((funcionBooleana(year)) == true){
        cout << "El año es bisiesto." << endl;
        cout << endl;
    }
    else{
        cout << "El año no es bisiesto." << endl;
        cout << endl;
    }
    return 0;
}