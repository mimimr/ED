#include <iostream>
#include <string>
using namespace std;

struct Personaje { // Estructura del personaje a usar
	string nombre;
	int nivel;
	int experiencia;
	float salud;
	int ataque;
};

//Funcion para subir de nivel
void subirNivel(Personaje* pj) {
	pj->nivel += 1;
	pj->experiencia = 0;
	pj->salud *= 1.1f;
	pj->ataque += 5;
}

//Creacion e inicializacion del personaje
int main() {
	Personaje pato = {
		"Gabriel",
		5,
		750,
		100.0f,
		20
	};
	//Mostrar los datos del personaje antes de subirlo de nivel
	cout << "DATOS DEL PERSONAJE ANTES DE SUBIR DE NIVEL" << endl;
	cout << "Nombre del personaje: " << pato.nombre << endl;
	cout << "Nivel: " << pato.nivel << endl;
	cout << "Experiencia: " << pato.experiencia << endl;
	cout << "Salud: " << pato.salud << endl;
	cout << "Ataque: " << pato.ataque << endl;

	//Subir de nivel al personaje
	subirNivel(&pato);
	//Mostrar los datos despues de subir de nivel
	cout << "DATOS DEL PERSONAJE DESPUES DE SUBIR DE NIVEL" << endl;
	cout << "Nombre del personaje: " << pato.nombre << endl;
	cout << "Nivel Actual: " << pato.nivel << endl;
	cout << "Experiencia Ganada: " << pato.experiencia << endl;
	cout << "Salud Obtenida: " << pato.salud << endl;
	cout << "Ataque Incrementada: " << pato.ataque << endl;

	return 0;
}
