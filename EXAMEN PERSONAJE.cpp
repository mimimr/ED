#include <iostream>
#include <string>
using namespace std;

// Definicion de la estructura del personaje
struct Personaje {  // Aqui esta la biblioteca y los nombres
    string nombre;
    int nivel;
    string clase;
    int vida;
    int ataque;
    int defensa;
};

// Momento de crear personajes
Personaje crearPersonaje(string nombre, int nivel, string clase, int vida, int ataque, int defensa) {
    Personaje nuevoPersonaje;
    nuevoPersonaje.nombre = nombre;
    nuevoPersonaje.nivel = nivel;
    nuevoPersonaje.clase = clase;
    nuevoPersonaje.vida = vida;
    nuevoPersonaje.ataque = ataque;
    nuevoPersonaje.defensa = defensa;
    return nuevoPersonaje;
}

int main() {
    // Crear un personaje utilizando la función crearPersonaje
    Personaje miPersonaje = crearPersonaje("Federico III", 20, "Chaman", 100, 50, 30);

    // Mostrar los atributos del personaje en la consola
    cout << "Nombre: " << miPersonaje.nombre << endl;
    cout << "Nivel: " << miPersonaje.nivel << endl;
    cout << "Clase: " << miPersonaje.clase << endl;
    cout << "Vida: " << miPersonaje.vida << endl;
    cout << "Ataque: " << miPersonaje.ataque << endl;
    cout << "Defensa: " << miPersonaje.defensa << endl;

    return 0;
}
