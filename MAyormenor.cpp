//Me mama el pito. Atte: Sofi

#include <iostream>
using namespace std;

//Prototipo de funcion
int MaxBetweenTwoNumbers(int n1, int n2);
int MinBetweenTwoNumers(int min1, int min2);

int main()
{
	int n1, n2;
	cout << "Digite primer numero: ";
	cin >> n1;

	cout << "Digite segundo numero:";
	cin >> n2;

	cout << "El mayor es: " << MaxBetweenTwoNumbers(n1, n2) << endl;
}
int MaxBetweenTwoNumbers(int n1, int n2)
{
	int max = 0;
	if (n1 > n2)
	{
		max = n1;
	}
	else
	{
		max = n2;
	}
	return max;

	// Menor que
	int min1, min2;
	cout << "Digite primer numero: ";
	cin >> min1;

	cout << "Digite segundo numero:";
	cin >> min2;

	cout << "El menor es: " << MinBetweenTwoNumers(min1, min2) << endl;
}
int MinBetweenTwoNumers(int min1, int min2)
{
	int min = 0;
	if (min1 < min2)
	{
		min = min1;
	}
	else
	{
		min = min2;
	}
	return min;
}
