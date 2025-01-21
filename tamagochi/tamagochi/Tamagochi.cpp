#include "MyHeader.h"
#include "Tamagochi.h"


Tamagochi::Tamagochi(int nivell) 
{
	nivellFelicitat = nivell;
}

void Tamagochi::hablar()
{
	std::cout << "Hola em dic " << nom << "." << endl;

	std::cout << "El meu nivell de felicitat es " << happiness() << "." << endl;

	std::cout << "El meu nivell de gana es " << hunger() << "." << endl;
}
//Retorna el nivell de felicitat
double Tamagochi::happiness()
{
	return nivellFelicitat / 10.0; //Escalem de 0 a 10
}

double Tamagochi::hunger()
{
	return 10.0 - (nivellFelicitat / 10.0); //Invers a la felicitat
}
