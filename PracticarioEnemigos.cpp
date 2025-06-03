#include <iostream>
using namespace std;

// Funcion que calcula la XP total basada en los enemigos derrotados
int CalcularXP(int enemigosDerrotados) {
    return enemigosDerrotados * 100; // Valor de cada enemigo
}

int main()
{
    int enemigos;
    //Pedir al jugador que ingrese la cantidad de enemigos derribados
    cout << "Ingrese la cantidad de enemigos derrotados: ";
    cin >> enemigos;

    //Calcular la XP total usando la funcion
    int expTotal = CalcularXP(enemigos);

    //Mostrar el resultado
    cout << "Has ganado " << expTotal << " puntos de experiencia" << endl;
    return 0;
}
