//Ejercicio 1 / Practica 1

#include <iostream>
using namespace std; // entrada/salida cin - cout

float pedirDistancia();
float pedirTiempo();
float calcularVelocidad(float distancia, float tiempo);
void mostrarVelocidad(float velocidad); // se usa void cuando quiero declarar una variable NO calcular o realizar una operación

int main()
{
    float distancia = pedirDistancia();
    float tiempo = pedirTiempo();
    float velocidad = calcularVelocidad(distancia, tiempo);
    mostrarVelocidad(velocidad);
    return 0;
}

float pedirDistancia() {
    float d;
    cout << "Distancia en metros: ";
    cin >> d;
    return d;
}

float pedirTiempo() {
    float t;
    cout << "Tiempo en segundos: ";
    cin >> t;
    return t;
}

float calcularVelocidad(float distancia, float tiempo) {
    // Velocidad = Distancia / Tiempo
    return distancia / tiempo;
}

void mostrarVelocidad(float velocidad) {
    cout << "La velocidad es: " << velocidad << " m/s" << endl;
}
