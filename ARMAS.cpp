#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Arma
struct Arma {
    string nombre;
    int precio;
    int daño;
};

int main() {
    // Definir las armas disponibles
    Arma armas[] = {
        {"Espada oxidada", 10, 5},
        {"Escudo mágico", 15, 2},
        {"Arco élfico", 20, 7}
    };

    // Calcular el número de armas disponibles
    int cantidadArmas = sizeof(armas) / sizeof(Arma);

    // Definir el oro inicial del jugador
    int oroJugador = 30;
    int* oroActual = &oroJugador; // Puntero a oroJugador

    while (true) { // Bucle principal del juego
        cout << "\nBienvenido a la tienda de armas" << endl;
        cout << "Oro disponible: " << *oroActual << " monedas de oro" << endl;

        // Mostrar las armas disponibles
        Arma* armasEnVenta = armas;
        cout << "Armas disponibles:" << endl;
        for (int i = 0; i < cantidadArmas; i++) {
            cout << i + 1 << ". " << armasEnVenta[i].nombre << " - Precio: "
                << armasEnVenta[i].precio << " - Daño: " << armasEnVenta[i].daño << endl;
        }

        // Mostrar el menú de opciones
        cout << "\nOpciones:" << endl;
        cout << "1. Comprar arma" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese una opción: ";
        int opcion;
        cin >> opcion;

        switch (opcion) {
        case 1: {
            // Comprar arma
            cout << "\nSeleccione el número del arma que desea comprar: ";
            int seleccion;
            cin >> seleccion;

            // Validar la entrada
            if (seleccion < 1 || seleccion > cantidadArmas) {
                cout << "Opción inválida. Intente de nuevo." << endl;
                break;
            }

            // Obtener el arma seleccionada
            Arma armaSeleccionada = armasEnVenta[seleccion - 1];

            // Verificar si el jugador tiene suficiente oro
            if (*oroActual >= armaSeleccionada.precio) {
                *oroActual -= armaSeleccionada.precio;
                cout << "Has comprado " << armaSeleccionada.nombre << " por "
                    << armaSeleccionada.precio << " monedas de oro." << endl;
            }
            else {
                cout << "No tienes suficiente oro para comprar " << armaSeleccionada.nombre << "." << endl;
            }
            break;
        }
        case 2:
            cout << "Gracias por visitar la tienda. ¡Hasta luego!" << endl;
            return 0;
        default:
            cout << "Opción inválida. Intente de nuevo." << endl;
        }
    }
    return 0;
}
