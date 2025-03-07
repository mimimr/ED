// Ejercicio II: TEsoros
#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Tesoro
struct Tesoro {
    string tipo;
    int* cantidadMonedasOro; // Puntero a entero para la cantidad de monedas de oro
    int poderObjeto;
};

// Función para encontrar un tesoro
Tesoro encontrarTesoro(string tipo, int* cantidadMonedasOro, int poderObjeto) {
    Tesoro nuevoTesoro;
    nuevoTesoro.tipo = tipo;
    nuevoTesoro.cantidadMonedasOro = cantidadMonedasOro;
    nuevoTesoro.poderObjeto = poderObjeto;
    return nuevoTesoro;
}

int main() {
    // Crear una variable para la cantidad de monedas de oro
    int cantidadMonedas = 100;

    // Crear un tesoro utilizando la función encontrarTesoro
    Tesoro miTesoro = encontrarTesoro("Cofre Antiguo", &cantidadMonedas, 50);

    // Mostrar los detalles del tesoro en la consola
    cout << "Tipo de Tesoro: " << miTesoro.tipo << endl;
    cout << "Cantidad de Monedas de Oro: " << *miTesoro.cantidadMonedasOro << endl;
    cout << "Poder del Objeto: " << miTesoro.poderObjeto << endl;

    return 0;
}
