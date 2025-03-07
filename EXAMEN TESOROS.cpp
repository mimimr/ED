// Ejercicio II: TEsoros
#include <iostream>
#include <string>

using namespace std;

// Estructura del Tesoro
struct Tesoro {
    string tipo;
    int* cantidadMonedasPesos; // Puntero para la cantidad ed monedas
    int poderDiamantito;
};

// La funcion para encontrar tesoros
Tesoro encontrarTesoro(string tipo, int* cantidadMonedasPesos, int poderDiamantito) {
    Tesoro nuevoTesoro;
    nuevoTesoro.tipo = tipo;
    nuevoTesoro.cantidadMonedasPesos = cantidadMonedasPesos;
    nuevoTesoro.poderDiamantito = poderDiamantito;
    return nuevoTesoro;
}

int main() {
    // Crear una variable para la cantidad de monedas de oro
    int cantidadBaro = 100;

    // Crear un tesoro utilizando la función encontrarTesoro
    Tesoro miPreciosa = encontrarTesoro("Tesoro del Messi", &cantidadBaro, 50);

    // Revelar las caraceristcas el tesoro encontrado
    cout << "Tipo de Tesorito: " << miPreciosa.tipo << endl;
    cout << "Cantidad de Monedas de Oro: " << *miPreciosa.cantidadMonedasPesos << endl;
    cout << "Poder del Objeto: " << miPreciosa.poderDiamantito << endl;

    return 0;
}
