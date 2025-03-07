//Ejercicio I: Creacion de un personaje principal

#include <iostream>
#include <string>

using namespace std;

// La estructura del personaje
struct Personaje { // Biblioteca
    string nombre;
    int nivel;
    int puntosVida;
    int puntosAtaque;
};

// Función para crear un personaje
Personaje crearPersonaje(string nombre, int nivel, int puntosVida, int puntosAtaque) {
    Personaje nuevoPersonaje;
    nuevoPersonaje.nombre = nombre;
    nuevoPersonaje.nivel = nivel;
    nuevoPersonaje.puntosVida = puntosVida;
    nuevoPersonaje.puntosAtaque = puntosAtaque;
    return nuevoPersonaje;
}

int main() {
    // Hora de crear el personaje usando la funcion crearPersonaje
    Personaje miPersonaje = crearPersonaje("Pepito FEderico", 10, 100, 50);

    // Los atributos del personaje mostrado en la consola
    cout << "Nombre: " << miPersonaje.nombre << endl;
    cout << "Nivel: " << miPersonaje.nivel << endl;
    cout << "Puntos de Vida: " << miPersonaje.puntosVida << endl;
    cout << "Puntos de Ataque: " << miPersonaje.puntosAtaque << endl;

    return 0;
}

