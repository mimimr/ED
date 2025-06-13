#include <iostream>
using namespace std;

//La estructura :D
struct Arma {
    string nombre;
    int precio;
    int dano;
};
int main()
{
    //Poner armas disponibles
    int opcion;
    Arma armas[3] = {
        {"Espada oxidada",10,13},
        {"Escudo magico",20,17},
        {"Arco elfico",15,15}
    };
    //Numero de armas disponibles
    int cantidadArmas = sizeof(armas) / sizeof(Arma);

    // Cantidad de oro que tiene el jugador
    int oroJugador = 60;
    int* oroActual = &oroJugador; // Se indica donde se encuentra la cantidad del dinero


    //Implementar bucle usando while
    while (true) {
        cout << "Bienvenido a la tienda de señora Pelos" << endl;
        cout << "Oro disponible: " << *oroActual << endl;
        cout << "Inventario de la tienda disponible" << endl;
        Arma* armaVenta = armas;

        for (int i = 0; i < cantidadArmas; i++) {
            cout << i + 1 << "." << armaVenta->nombre << "-" << armaVenta->precio << "oro" << endl;
            armaVenta++;
        }
        cout << "Selecciona una opcion: " << endl;
        cout << "1) Comprar Arma" << endl;
        cout << "2) Salir de la tienda" << endl;
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Seleccione un arma: " << endl;
            break;
        case 2:
            cout << "Saliste de la tienda" << endl;
        }
        return 0;
    }
    
}
