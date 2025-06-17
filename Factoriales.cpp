#include <iostream>
using namespace std;
long long factorial(int n);

int main()
{
	int numero;
	cout << "Ingresa un numero positivo: ";
	cin >> numero;

	if (numero < 0) {
		cout << "Error. El factorial de un numero negativo no existe" << endl;
	}
	else {
		long long resultado = factorial(numero);
		cout << "El factorial de " << numero << " es: " << resultado << endl;
	}
	return 0;
}
long long factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}
