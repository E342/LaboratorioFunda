#include "iostream"
#include "cstdlib" // rand y srand
#include "ctime" // time

using namespace std;

// Ajustes del juego
#define INTENTOS_MAXIMOS 5
#define INFERIOR 1 // Límite inferior
#define SUPERIOR 100 // Límite superior
// Mecanismo de funciones
int aleatorio_en_rango(int minimo, int maximo);

int numMagic() 
{
  
  srand(static_cast<unsigned>(time(NULL)));
  int secret = rand() % 101;
  // Empleado con el fin de obtener un número aleatorio.
    
  int resp, intent = 0;

  while (1) {
    int x;
    intent ++;
    cout << "Digite un número entre 1 y 100: " << endl;
    scanf("%d", &resp);
    if (resp == secret) {
      cout << endl << "¡Felicidades a logrado adivinar el número!" << endl;
      break;
    }
    // En caso de que el usuario digite el mismo número escogido por el programa.
    /* Cuando el usuario adivina el número desconocido, la función "While"
    interrumpe el proceso.*/
    else if (resp > secret) {
      cout << "el número es menor." << endl;
      x = 5 - intent;
      cout << "Intentos restantes: " << x ;
    }
    // En caso de que el usuario digite un número mayor que el escogido por programa.
    else if (resp < secret){
      cout << "el número es mayor." << endl;
      x = 5 - intent;
      cout << "Intentos restantes: " << x ;
    }
    if (intent >= INTENTOS_MAXIMOS) {
      cout << "Ha perdido, el número que elegido fue: " << secret << endl;
      break;
    }
    /*Cuando el usuario pierde, dependientemente de superaron o igualaron
    los intentos, el progrma interumpe el proceso*/
  }
}
int aleatorio_en_rango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
  // Devuelve un número aleatorio en un rango
}