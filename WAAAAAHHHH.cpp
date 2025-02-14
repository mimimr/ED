// WAAAAAAAAAAAAAHHHHHHHHHHH

#include <iostream>
#include <cmath>
#define M_PI 3.141592653
using namespace std;
void TrajectoryCalculation(double* posX, double* posY, double time, int power, int angle, double gravity) {
	double velocityX = power * cos(angle * M_PI / 180);
	double velocityY = power * sin(angle * M_PI / 180);
	*posX = velocityX * time;
	*posY = velocityY * time - 0.5 * gravity * time * time;
	cout << "Tiempo:" << time << "S ->" << "Posicion(x,y): ("<<posX << ", " << posY << ")" << endl;
	if(*posY <=0)
	{
		cout << "El balón ha tocado el suelo. Fin del tiro" << endl;
		return;
	}
}//Función recursiva

int main()
{
   
}
