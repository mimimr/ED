#include <iostream>
#include <string>
using namespace std;

// Crear la estructura para el objeto
struct JuegoObjeto 
{
    string nombre;
    string tipo;
    int valor;
    int energia;
    string lugar;
};

// Uso de typedef para crear un alias para el objeto
typedef JuegoObjeto Esmeralda;

// Funcion que recibe dos objetos y regresa el más valioso
Esmeralda Valioso(Esmeralda es1, Esmeralda es2) 
{
    if (es1.valor > es2.valor)
    {
        return es1;
    }
    else
    {
        return es2;
    }
}

int main() 
{
    //Ejemplo de uso
    Esmeralda Bruta = { "Ojo de la luna","Arma",600,50,"Isla plateada" };
    Esmeralda Sofisticada = { "Corazón dorado", "Proteccion",700,60,"Cadaver de Dios" };

    return 0;
}

