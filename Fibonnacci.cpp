#include <iostream>
using namespace std;
int fibonacci(int n);

int main()
{
	int nElementos; //Pedimos numero entero positivo
	{
		cout << "Digite el numero de elementos: ";
		cin >> nElementos;
	} while (nElementos <= 0);

	//Mandamos llamar la funcion pero de forma iterativa para imprimir los elementos
	cout << "Serie Fibonacci: ";
	for (int i = 0; i < nElementos; i++) {
		cout << fibonacci(i) << ",";
	}
	return 0;
}
int fibonacci(int n)
{
	if (n < 2) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
