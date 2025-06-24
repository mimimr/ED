#include <iostream>
#include <string>
using namespace std;

struct Nivel {
	string nombre; //Nombre del nivel
	string fondo; //Nombre del archivo que contiene el fondo del nivel
	int num_enemigos;
	int tiempo;
	bool jefe;
};

void MostrarNivel(Nivel n) {
	cout << "Nombre del nivel: " << n.nombre << endl;
	cout << "Fondo del nivel: " << n.fondo << endl;
	cout << "Numero de enemigos: " << n.num_enemigos << endl;
	cout << "Tiempo limite: " << n.tiempo << " segundos" << endl;
	cout << "Jefe final: " << (n.jefe ? "Si" : "No") << endl;
}

int main() {
	Nivel n1 = { "Nivel 1", "bosque.png", 10,60,false };
	MostrarNivel(n1);
}
