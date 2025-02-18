#include <iostream>
using namespace std;
// Declaracion de funciones
// Funcion para verificar si un numero es par
bool Par(int num);
// Funcion para verificar si un numero es impar
bool Impar(int num);

int main()
{
	int numero = 5;
	if (Impar(numero))
	{
		cout << numero << "es impar" << endl;
	}
	else
	{
		cout << numero << "es par" << endl;
	}
	return 0;
}
// funcion para ver si el numero es par
bool Par(int num)
{
	if (num == 0)
	{
		return true;
	}
	else
	{
		return Impar(num - 1);
	}
}
//Funcion para verificar si es impar
bool Impar(int num)
{
	if (num == 0)
	{
		return false;
	}
	else 
	{
		return Par(num - 1);
	}
}
