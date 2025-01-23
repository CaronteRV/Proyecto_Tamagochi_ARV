#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tamagochi
{
public:
	Tamagochi(int nivellInicial, int moneyInicial);
	void hablar();
	void happiness();
	void hunger();	
	void jugar();
	void donarMenjar();
	void simularPasTemps();
	void dormir();
	void beure();
	void airelliure();
	void mostrarValors();

private:
	double nivellFelicitat;
	double nivellGana;
	int money;
	string nom = "26.1.14.9";
	
	string calcularEstatAnim();
	double calcularMitjana(); 
};

