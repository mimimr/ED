#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Arma
struct Arma {
    string nombre;
    int precio;
    int dano;
};

int main() {
    // Crear un arreglo de armas
    Arma armas[] = {
        {"Espada", 150, 25},
        {"Arco", 100, 15},
        {"Hacha", 200, 30},
        {"Lanza", 120, 20}
    };

    // Crear un puntero al arreglo de armas
    Arma* armasEnVenta = armas;
    int numeroDeArmas = sizeof(armas) / sizeof(armas[0]);

    // Recorrer el arreglo usando un bucle for
    for (int i = 0; i < numeroDeArmas; i++) {
        // Mostrar la información de cada arma
        cout << "Arma #" << (i + 1) << endl;
        cout << "Nombre: " << armasEnVenta[i].nombre << endl;
        cout << "Precio: " << armasEnVenta[i].precio << endl;
        cout << "Daño: " << armasEnVenta[i].dano << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}
