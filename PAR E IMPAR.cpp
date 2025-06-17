
#include <iostream>
using namespace std;
bool Par(int num);
bool Impar(int num);

int main()
{
	int numero = 5; // Se ingresa un numero

	if (Impar(numero)) 
	{ 
		cout << numero << " Es impar " << endl;
	}
	else {
		cout << numero << " Es par " << endl;
	}
}
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
bool Impar(int num) 
{
	if (num == 0) {
		return false;
	}
	else 
	{
		return Par(num - 1);
	}
}
