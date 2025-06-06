#include <iostream>
#include <string.h>
using namespace std;

void pedirDatos();
void contarVocales(char*);
char palabraUsuario[30];

int main()
{
	pedirDatos();
	//Llamada a la funcion para contar vocales del nombre
	contarVocales(palabraUsuario);
}
void pedirDatos()
{
	cout << "Digite una palabra: ";
	cin.getline(palabraUsuario, 30, '\n');
}
void contarVocales(char*palabra)
{
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
	// mientras nombre sea diferente de nulo '\0'
	while (*palabra)
	{
		switch (*palabra)
		{
		case'A':contA++; break;
		case'E':contE++; break;
		case'I':contI++; break;
		case'O':contO++; break;
		case'U':contU++; break;
		
		}
		palabra++;
	}
	
	//Imprimir el conteo de cada vocal
	cout << "\n Numero de vocales A" << contA << endl;
	cout << "\n Numero de vocales E" << contE << endl;
	cout << "\n Numero de vocales I" << contI << endl;
	cout << "\n Numero de vocales O" << contO << endl;
	cout << "\n Numero de vocales U" << contU << endl;
}

