//Ejercicio IV: Enemigos 

#include <iostream>
#include <string>

using namespace std;

// Estructura del personaje
struct Personaje {
    string nombre;
    int nivel;
    int puntosVida;
    int puntosAtaque;
};

// Estructura del enemigo
struct Enemigo {
    string nombre;
    int nivel;
    int puntosVida;
    int puntosAtaque;
};

// Función para simular un combate entre el personaje y el enemigo
void encuentro(Personaje& personaje, Enemigo& enemigo) {
    cout << "Oh no, un " << enemigo.nombre << " acaba de manifestarse!" << endl;
    cout << "Que empiecen los trancazos" << endl;

    // Simulando el combate
    while (personaje.puntosVida > 0 && enemigo.puntosVida > 0) {
        // Personaje ataca al enemigo
        cout << personaje.nombre << " LLEGA " << enemigo.nombre << " PARA HACER " << personaje.puntosAtaque << " BOOM " << endl;
        enemigo.puntosVida -= personaje.puntosAtaque;

        // Verificar si el enemigo si se petateo
        if (enemigo.puntosVida <= 0) {
            cout << enemigo.nombre << " Se fue con san Pedro" << endl;
            break;
        }

        // Enemigo golpea al personaje
        cout << enemigo.nombre << " OH NO LLEGA " << personaje.nombre << " PARA HACER " << enemigo.puntosAtaque << " BOOM " << endl;
        personaje.puntosVida -= enemigo.puntosAtaque;

        // Verificar si el personaje se petateo
        if (personaje.puntosVida <= 0) {
            cout << personaje.nombre << " Se fue con San Pedro" << endl;
            break;
        }
    }

    // Mostrar el resultado final del combate
    if (personaje.puntosVida > 0) {
        cout << personaje.nombre << " HAS GANADO UN AUUUTOOO " << endl;
    }
    else {
        cout << personaje.nombre << " Como que te fallo un poquito no?" << endl;
    }
}

int main() {
    // Crear el personaje principal
    Personaje personaje = { "Pepito", 20, 152, 50 };

    // Crear un enemigo
    Enemigo enemigo = { "Chaneque", 15, 100, 25 };

    // Mostrar los atributos del personaje y el enemigo
    cout << "Personaje: " << personaje.nombre << " (Nivel " << personaje.nivel << ")" << endl;
    cout << "Vida: " << personaje.puntosVida << ", Ataque: " << personaje.puntosAtaque << endl;
    cout << "Enemigo: " << enemigo.nombre << " (Nivel " << enemigo.nivel << ")" << endl;
    cout << "Vida: " << enemigo.puntosVida << ", Ataque: " << enemigo.puntosAtaque << endl;

    // Simular el encuentro entre el personaje y el enemigo chan chan chaaaan
    encuentro(personaje, enemigo);

    return 0;
}
