#include"MyHeader.h"
#include "Tamagochi.h"
#include "Critter.h"
#include <iostream>

using namespace std;

int main() {

	// Variables inicials
	int vidaDelTamagochi = 3;

	Tamagochi Zani(50);

	cout << "Benvingut al teu Tamagochi! " << endl;

	int opcio;

	do {
		cout << "\nQue vols fer? " << endl;
		cout << "1. Escoltar el tamagotchi " << endl;
		cout << "2. Augmentar la felicitat " << endl;
		cout << "3. Donar menjar (gasta diners) " << endl;
		cout << "4. Sortir " << endl;
		cout << "Tria uan opcio: ";
		
		cin >> opcio;

		switch (opcio)
		
		{
		case 1:
			Zani.hablar();
			break;
		case 2:
			cout << "Estas jugant amb el tamagotchi! " << endl;
			Zani.happiness();
			break;
		case 3:
			cout << "Has donat menjar al tamagotchi! " << endl;
			Zani.happiness();
		case 4:
			cout << "Fins la propera! " << endl;
			break;
		default:
			cout << "Opcio no valida. Intenta-ho de nou. " << endl;
			break;
		}

		// Mostrem l'estat actual del tamagotchi després de cada acció
		cout << "\nVides del tamagotchi: " << vidaDelTamagochi << endl;

	} while (opcio != 4);
	
	return 0;
}