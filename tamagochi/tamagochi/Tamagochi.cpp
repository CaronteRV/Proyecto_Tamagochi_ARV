#include "MyHeader.h"
#include "Tamagochi.h"

Tamagochi::Tamagochi(int vidaRecibida, double dineroRecibido)
{
	vida = vidaRecibida;
	money = dineroRecibido;
}

double Tamagochi::getMoney()
{
	return money;
}

void Tamagochi::setMoney(double dineroRecibido)
{
	money = dineroRecibido;
}

void Tamagochi::hablar()
{
	std::cout << "tetas";
}
