#include <iostream>
using namespace std;
int main()
{
	int numero, * dir_numero;

	//Pedimos el numero al usuario
	cout << "Digite un numero:";
	cin >> numero;

	//Guardando la posición de memoria
	dir_numero = &numero;
	
	if (*dir_numero % 2 == 0)
	{
		cout << "El numero:" << *dir_numero << "es par" << endl;
		cout << "Posicion:" << *dir_numero << endl;
	}
	else 
	{
		cout << "El numero:" << *dir_numero << "Es impar" << endl;
		cout << "Posicion:" << *dir_numero << endl;
	}
	return 0;
}
