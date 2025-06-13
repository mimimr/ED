#include <iostream>
using namespace std;

//Declaracion de la funcion
void Imprime() {
    cout << "Imprimiendo un mensaje" << endl;
}
int main()
{
   //Declaracion del puntero a funcion
    void (*ptr_funcion)() = Imprime; // se usa * para crear una indirección en el apuntador

    //Llamada a la funcion a través del puntero
    ptr_funcion();
}

