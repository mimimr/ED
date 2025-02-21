#include <iostream>
using namespace std;
struct Objeto {
	string nombre;
	int valor;
};
typedef Objeto item;
item obtenermasvalioso(const item & a, const item & b)
{
	return (a.valor > b.valor) ? a : b;
}
int main()
{
	item espada = { "Espada",150 };
}
// :D
