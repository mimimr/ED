#include <iostream>
#include <string>
using namespace std;
struct enemigos { // estructura del enemigo
    string nombre;
    int niveles;
    float salud; 

    //Metodo para atacar 
    void Atacar(float dano) {
        salud = salud - dano;
        if (salud <= 0) {
            salud = 0;
            cout<<nombre<<"ha recibido"
        }

    }
};
int main()
{
    //Crear la estructura del bicho
    enemigos bicho1;
    // Hora de asignar los valores :D
    bicho1.nombre = "Nahual";
    bicho1.niveles = 101;
    bicho1.salud = 150.50;
    // Muestrame los valores, muestrame esta lol
    cout << "Nombre: " << bicho1.nombre << endl;
    cout << "Nivel: " << bicho1.niveles << endl;
    cout << "Salud: " << bicho1.salud << endl;
}

