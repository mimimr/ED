// :D

#include <iostream>
using namespace std; //para evitar escribir std: en cada instruccion
// Prototipo de funcion

int main()
{
	int salud; //Para declarar salud
	int* ptrSalud = &salud; //Puntero
	//Solicitar salud de Jill Valentine
	cout << "Ingrese su salud          (1-100)";
	cin >> *ptrSalud;
}
	void evaluarSalud(int* ptrSalud) {
		//determina el estado de la salud usando el puntereo 
		if (*ptrSalud <= 20) {
			cout << "Estado:CRITICO" << endl;
		}
		else if (*ptrSalud <= 130){
			cout << "Etado NORMAL" << endl;
		}
		else {
			cout << "Estado:ALTA" << endl;
		}
}
