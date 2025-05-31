//Ejercicio 2

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function prototypes
int seleccionarPoligono();
float pedirLado();
float calcularPerimetro(int numLados, float lado);
float calcularApotema(int numLados, float lado);
float calcularArea(float perimetro, float apotema);
void mostrarResultado(int tipoPoligono, float area);

int main() {
    // Seleccionar el poligono
    int tipoPoligono = seleccionarPoligono();

    // Pedir el lado
    float lado = pedirLado();

    // Calcular el perimetro
    float perimetro = calcularPerimetro(tipoPoligono, lado);

    // Calcular el apotema
    float apotema = calcularApotema(tipoPoligono, lado);

    // Calcular el area
    float area = calcularArea(perimetro, apotema);

    // Mostrar resultados
    mostrarResultado(tipoPoligono, area);

    return 0;
}

int seleccionarPoligono() {
    int opcion;
    cout << "Seleccione el poligono regular:" << endl;
    cout << "1. Pentagono (5 lados)" << endl;
    cout << "2. Hexagono (6 lados)" << endl;
    cout << "3. Heptagono (7 lados)" << endl;
    cout << "4. Octagono (8 lados)" << endl;
    cout << "Ingrese su opcion (1-4): ";
    cin >> opcion;

    // Validar la opcion
    while (opcion < 1 || opcion > 4) {
        cout << "Opcion invalida. Por favor ingrese 1-4: ";
        cin >> opcion;
    }

    // Regresar al numero seleccionado
    return opcion + 4; // 1->5, 2->6, 3->7, 4->8
}

float pedirLado() {
    float lado;
    cout << "Ingrese la longitud del lado del poligono: ";
    cin >> lado;

    // Validar el resultado
    while (lado <= 0) {
        cout << "La longitud debe ser positiva. Ingrese nuevamente: ";
        cin >> lado;
    }

    return lado;
}

float calcularPerimetro(int numLados, float lado) {
    return numLados * lado;
}

float calcularApotema(int numLados, float lado) {
    // Formula del apotema en poligonos regulares: a = l / (2 * tan(π/n))
    const float PI = 3.14159265358979323846;
    return lado / (2 * tan(PI / numLados));
}

float calcularArea(float perimetro, float apotema) {
    // Area = (perimetro * apotema) / 2
    return (perimetro * apotema) / 2;
}

void mostrarResultado(int tipoPoligono, float area) {
    string nombrePoligono;

    switch (tipoPoligono) {
    case 5: nombrePoligono = "Pentagono"; break;
    case 6: nombrePoligono = "Hexagono"; break;
    case 7: nombrePoligono = "Heptagono"; break;
    case 8: nombrePoligono = "Octagono"; break;
    default: nombrePoligono = "Poligono"; break;
    }

    cout << fixed << setprecision(2);
    cout << "\nEl area del " << nombrePoligono << " es: " << area << endl;
}
