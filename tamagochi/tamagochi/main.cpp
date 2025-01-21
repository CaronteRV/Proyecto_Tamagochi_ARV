#include"MyHeader.h"
#include "Tamagochi.h"
void main() {
	int vidaDelTamagochi = 3;
	double dineroDeTamagochi = 50.0;
	Tamagochi zani(vidaDelTamagochi, dineroDeTamagochi);
	double dineroDelTamagochi = zani.getMoney();
	if (dineroDelTamagochi >= 10)
	{
		zani.setMoney(dineroDelTamagochi - 10);
	}
	dineroDelTamagochi = zani.getMoney();
	std::cout << "Ahora tengo" << dineroDelTamagochi;
}