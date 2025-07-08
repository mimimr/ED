#include <iostream>
using namespace std;

void VerificarNivel(int nivelActual, int nivelObjetivo) { // Se usa void para llegar al resultado unicamente
	if (nivelActual >= 2 * nivelObjetivo) { // If y Else para condicionar dependiendo de la respuesta que se de
		cout << "acceso concedido. Pasas a la nueva area" << endl;
	}
	else {
		cout << "Acceso denegado. Nivel insuficiente" << endl;
	}
}

int main()
{
	int nivelJugador, nivelRequerido;

	cout << "Ingrese su nivel actual: ";
	cin >> nivelJugador;

	cout << "Ingrese el nivel objetivo requerrido: ";
	cin >> nivelRequerido;

	VerificarNivel(nivelJugador, nivelRequerido);
 
	return 0;
}
