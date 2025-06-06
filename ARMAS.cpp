#include <iostream>
#include <string>

using namespace std;
//La estructura :D
struct arma {
    string nombre;
    int precio;
    int danio;
};
int main()
{
    //Poner armas disponibles
    arma armas[] = {
        {"Espada oxidada",10,13},
        {"Escudo magico",20,17},
        {"Arco elfico",15,15}
    };
    //Numero de armas disponibles
    int cantidadArmas = sizeof(armas) / sizeof(arma);

    //Oro del jugador
    int oroJugador = 30;
    int* oroActual = &oroJugador; //*& Son los punteros

    while (true) {//Bucle principal
        cout << "Bienvenido a la tienda de Doña Pelos" << endl;
        cout << "Oro disponible: " << *oroActual << "Moneditas" << endl;

        //Armas disponibles
        arma* armasEnVenta = armas;
        cout << "Chequese lo que tenemos: " << endl;
        for (int i = 0; i < cantidadArmas; i++) {
            cout << i + 1 << "." << armasEnVenta[i].nombre << "-Precio: " << armasEnVenta[i].nombre << "-Daño: " << armasEnVenta[i].danio << endl;
        }
        //Ver el menú :D
        cout << "Opciones: " << endl;
        cout << "¿Vas a comprar?" << endl;
        cout << "¿Si o no?" << endl;
        cout << "SI O NO";
        int opcion;
        cin >> opcion;

        switch (opcion) {
        case 1: { //Compra el arma ci
            cout << "Llevele que va a comprar:";
            int seleccion;
            cin >> seleccion;

            //Hora de la entrada
            if (seleccion < 1 || seleccion> cantidadArmas) {
                cout << "Por favor ese nooo" << endl;
                break;
            }
            //Arma seleccionada
            arma armaSeleccionada = armasEnVenta[seleccion - 1];
            //Ver si el jugador tiene dinero
            if (*oroActual >= armaSeleccionada.precio) {
                *oroActual -= armaSeleccionada.precio;
                cout << "Has comprado" << armaSeleccionada.nombre << "por" << armaSeleccionada.precio << "Moneditas de oro" << endl;
            }
            else {
                cout << "Pobre no tienes dinero JAJAJA" << armaSeleccionada.nombre << "." << endl;
            }
            break;
        }
        case 2:
            cout << "Gracias por su visita en la tienda BYE BYE!!" << endl;
            return 0;
        defaut:
            cout << "Ni modo no se pudo" << endl;
        }
    }
    return 0;
}
