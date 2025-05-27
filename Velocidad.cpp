#include <iostream> // Librerias y marcos
using namespace std;

//Variables globales y prototipo de funcion
double pedirDistancia();
double pedirTiempo();
double calcularVelocidad(double distancia, double tiempo);
void mostrarVelocidad(double velocidad);

int main()
{
    double distancia, tiempo, velocidad;
    distancia = pedirDistancia();
    tiempo = pedirTiempo();
    velocidad = calcularVelocidad(distancia, tiempo);
    mostrarVelocidad;

    return 0;
    
}
//Funcion para pedir distancia
double  pedirDistancia() {
    double d;
    cout << "Ingrese la distancia recorrida (en metros): ";
    cin >> d;
    return d;
}

//Funciones para pedir el tiempo
double pedirTiempo() {
    double t;
    cout << "Ingrese el tiempo (en segundos): ";
    cin >> t;
    return t;
}
//Funcion para calcular la velocidad
double calcularVelocidad(double distancia, double tiempo) {
   
    cout << "Calcular la velocidad: v = d/t " << distancia << "m/" << tiempo << "s" << endl;
    return distancia / tiempo;

}
//Funcion para mostrar el resultado
void mostrarVelocidad(double velocidad) {
    cout << "La velocidad del movil es: " << velocidad << "m/s" << endl;
}
