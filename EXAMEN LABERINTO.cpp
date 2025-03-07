//Ejercicio III: Laberintos 

#include <iostream>
using namespace std;

// Definir el tamaño de las filas y columnas
const int FILAS = 6;
const int COLUMNAS = 4;

// Momento de definir el laberinto(0: camino libre, 1: pared, 2: salida)
int laberinto[FILAS][COLUMNAS] = {
    {0, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 2},
    {0, 1, 0, 0}
};

// Función recursiva para resolver el laberinto
bool resolverLaberinto(int x, int y) {
    // Verificar si la posición actual está fuera de los límites del laberinto
    if (x < 0 || x >= FILAS || y < 0 || y >= COLUMNAS) {
        return false;
    }

    // Verificar si la posición actual es una pared o ya fue visitada
    if (laberinto[x][y] == 1 || laberinto[x][y] == 3) {
        return false;
    }

    // Verificar si la posición actual es la salida
    if (laberinto[x][y] == 2) {
        cout << "¡Salida encontrada en (" << x << ", " << y << ")!" << endl;
        return true;
    }

    // Marcar la posición actual como visitada
    laberinto[x][y] = 3;

    // Intentar moverse en las cuatro direcciones posibles
    if (resolverLaberinto(x + 1, y)) return true; // Moverse hacia abajo
    if (resolverLaberinto(x - 1, y)) return true; // Moverse hacia arriba
    if (resolverLaberinto(x, y + 1)) return true; // Moverse hacia la derecha
    if (resolverLaberinto(x, y - 1)) return true; // Moverse hacia la izquierda

    // Si no se encuentra la salida, desmarcar la posición actual
    laberinto[x][y] = 0;
    return false;
}

int main() {
    // Posición inicial del jugador
    int inicioX = 0;
    int inicioY = 0;

    // Intentar resolver el laberinto
    if (resolverLaberinto(inicioX, inicioY)) {
        cout << "El jugador ha alcanzado la salida." << endl;
    }
    else {
        cout << "No se encontró una salida." << endl;
    }

    return 0;
}
