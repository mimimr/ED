#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// Estructura para el jugador (usando puntero)
struct Jugador {
    string nombre;
    int x;
    int y;
};

// Función recursiva para calcular factorial (ejemplo de recursividad)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Función que retorna un string con el tipo de tesoro encontrado
string encontrarTesoro() {
    int opcion = rand() % 6;
    switch(opcion) {
        case 0: return "¡UNA ROCA!";
        case 1: return "¡UNA MONEDA DE BRONCE!";
        case 2: return "¡UNA MONEDA DE PLATA!";
        case 3: return "¡UNA MONEDA DE ORO!";
        case 4: return "¡UN ENORME SACO DE ORO!";
        case 5: return "¡EL ONE PIECE!";
        default: return "¡NADA INTERESANTE!";
    }
}

// Función para movimiento manual
void movimientoManual(Jugador* jugador, int& intentos) {
    char direccion;
    cout << "Ingrese direccion (W: arriba, S: abajo, A: izquierda, D: derecha): ";
    cin >> direccion;
    
    switch(toupper(direccion)) {
        case 'W': jugador->y++; break;
        case 'S': jugador->y--; break;
        case 'A': jugador->x--; break;
        case 'D': jugador->x++; break;
        default: cout << "Direccion no valida. No se mueve.\n";
    }
    
    intentos++;
    cout << "Posicion actual: (" << jugador->x << ", " << jugador->y << ")\n";
    cout << "Tesoro encontrado: " << encontrarTesoro() << endl;
}

// Función para movimiento automático
void movimientoAutomatico(Jugador* jugador, int& intentos) {
    int direccion = rand() % 4;
    
    switch(direccion) {
        case 0: jugador->y++; cout << "Se movio hacia arriba.\n"; break;
        case 1: jugador->y--; cout << "Se movio hacia abajo.\n"; break;
        case 2: jugador->x--; cout << "Se movio hacia la izquierda.\n"; break;
        case 3: jugador->x++; cout << "Se movio hacia la derecha.\n"; break;
    }
    
    intentos++;
    cout << "Posicion actual: (" << jugador->x << ", " << jugador->y << ")\n";
    cout << "Tesoro encontrado: " << encontrarTesoro() << endl;
}

// Función para verificar si el jugador escapó
bool haEscapado(Jugador* jugador) {
    // El jugador escapa si está a más de 5 unidades del origen (0,0)
    return (abs(jugador->x) > 5 || abs(jugador->y) > 5;
}

int main() {
    srand(time(0)); // Inicializar semilla para números aleatorios
    
    cout << "¡Bienvenido al Escape del Laberinto!\n";
    
    // Crear jugador (como puntero)
    Jugador* jugador = new Jugador;
    
    cout << "Ingrese el nombre del jugador: ";
    getline(cin, jugador->nombre);
    
    jugador->x = 0;
    jugador->y = 0;
    
    cout << "Jugador " << jugador->nombre << " comienza en (" 
         << jugador->x << ", " << jugador->y << ")\n";
    
    int intentos = 0;
    int opcion;
    bool escapo = false;
    
    while (!escapo) {
        cout << "\n1. Movimiento manual\n2. Movimiento automatico\nSeleccione opcion: ";
        cin >> opcion;
        
        if (opcion == 1) {
            movimientoManual(jugador, intentos);
        } else if (opcion == 2) {
            movimientoAutomatico(jugador, intentos);
        } else {
            cout << "Opcion no valida. Intente de nuevo.\n";
            continue;
        }
        
        // Verificar si escapó (20% de probabilidad en cada movimiento)
        if (rand() % 5 == 0 || haEscapado(jugador)) {
            escapo = true;
            cout << "\n¡Felicidades " << jugador->nombre << "! ¡Has escapado del laberinto!\n";
            cout << "Te tomo " << intentos << " intentos.\n";
            
            // Demostración de función recursiva
            cout << "El factorial de " << (intentos % 5 + 1) << " es: " 
                 << factorial(intentos % 5 + 1) << endl;
        }
    }
    
    // Liberar memoria del puntero
    delete jugador;
    
    return 0;
}