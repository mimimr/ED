#include <iostream>
#include <math.h>
#define M_PI 3.14159265358979323846 // Definición de PI 
using namespace std;

// Paso 2. Implementar la función TrajectoryCalculation
void TrajectoryCalculation(float* posX, float* posY, float tiempo, int potencia, int angulo, float gravedad)
{
    //Calcular los componentes de velocidad en radianes 
    float velocityX = potencia * cos(angulo * M_PI / 180);
    float velocityY = potencia * sin(angulo * M_PI / 180);

    //Actualización de la posición del balón 
    *posX = velocityX * tiempo;
    *posY = velocityX * tiempo - 0.5 * gravedad * tiempo * tiempo;

    
    cout << " Tiempo: " << tiempo << " s " << endl;
    cout << " Posición X: " << *posX << " m " << endl;
    cout << " Posición Y: " << *posY << " m " << endl;

    // Verificar que el balón ha llegado al suelo -> Condicional 

    if (*posY <= 0)
    {
        cout << "El balón ha llegado al suelo. Fin del tiro. " << endl;
        return;
    }

    TrajectoryCalculation(posX, posY, tiempo + 0.1, potencia, angulo, gravedad);
}

// Definición de variables 

int potencia;
int angulo;
const float gravedad = 9.81;
float x = 0.0;
float y = 0.0;
float* posX = &x;
float* posY = &y;
float tiempo = 0.1;//:D

   int main()
    {
       // Solicitar datos al usuario 

       cout << "---------------------PROGRAMA PARA CALCULAR EL TIRO PARABOLICO-----------" << endl;

       cout << "Indique la potencia de tiro (0-100): " << endl;
       cin >> potencia;
       if (potencia < 0 || potencia>100)
       {
           cout << "ERROR: La potencia debe estar entre 0 y 100." << endl;
           return 1;
       }
       cout << "Indique el ángulo de tiro (0-90 grados): " << endl;
       cin >> angulo;
       if (angulo < 0 || angulo > 90)
       {
           cout << "ERROR: El ángulo debe estar entre 0 y 90 grados" << endl;
           return 1;
       }
       
       // Llamar a la función TrajectoryCalculation 

       TrajectoryCalculation(posX, posY, tiempo + 0.1, potencia, angulo, gravedad);
       return 0;
}

