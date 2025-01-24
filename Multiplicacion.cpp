//Me mama el pito. Atte: Sofi

#include <iostream>
using namespace std;
//Prototipo de Funcion
void pedirDatos();
void mult(float x, float y);

float n1, n2;
int main()
{
	pedirDatos();
	mult(n1, n2);

	return 0;
}
void pedirDatos()
{
	cout << "digite 2 numeros: ";
	cin >> n1 >> n2;
}
void mult(float x, float y)
{
	float multiplicacion = n1 * n2;
	cout << "La multiplicacion es: " << multiplicacion << endl;
}
