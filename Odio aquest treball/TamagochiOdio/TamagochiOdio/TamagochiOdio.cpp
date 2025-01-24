#include "TamagochiOdio.h"
#include <iostream>
#include <string>

using namespace std;

// Constructor
Tamagochi::Tamagochi() : nom("Tama"), fam(50), energia(50), diversio(50) {}

// Mètode per donar menjar
void Tamagochi::donarMenjar() {
    fam += 20;
    if (fam > 100) fam = 100; // No pot superar el límit de 100
    cout << nom << " ha menjat i està més satisfet!" << endl;
}

// Mètode per jugar
void Tamagochi::jugar() {
    diversio += 20;
    energia -= 10; // Jugar consumeix energia
    if (diversio > 100) diversio = 100;
    if (energia < 0) energia = 0;
    cout << nom << " s'ha divertit jugant!" << endl;
}

// Mètode per dormir
void Tamagochi::dormir() {
    energia += 30;
    if (energia > 100) energia = 100;
    cout << nom << " ha dormit i ara té més energia!" << endl;
}

// Simular el pas del temps
void Tamagochi::simularPasTemps() {
    fam -= 10;
    energia -= 10;
    diversio -= 10;

    if (fam < 0) fam = 0;
    if (energia < 0) energia = 0;
    if (diversio < 0) diversio = 0;

    cout << "Ha passat el temps i " << nom << " s'ha cansat una mica..." << endl;
}

// Funció per calcular l'estat animat
string Tamagochi::calcularEstatAnim() const {
    if (fam <= 20 && energia <= 20 && diversio <= 20) {
        return "El tamagotchi està molt trist i cansat...";
    }
    else if (fam > 80 && energia > 80 && diversio > 80) {
        return "El tamagotchi està molt feliç!";
    }
    else if (fam < 40) {
        return "El tamagotchi té molta gana.";
    }
    else if (energia < 40) {
        return "El tamagotchi està molt cansat.";
    }
    else if (diversio < 40) {
        return "El tamagotchi s'avorreix.";
    }
    else {
        return "El tamagotchi està en un estat normal.";
    }
}

// Mostrar l'estat del Tamagotchi
void Tamagochi::mostrarEstat() const {
    cout << "Nom: " << nom << endl;
    cout << "Fam: " << fam << "/100" << endl;
    cout << "Diversió: " << diversio << "/100" << endl;
    cout << "Energia: " << energia << "/100" << endl;
    cout << "Estat: " << calcularEstatAnim() << endl;
}


Tamagochi::Tamagochi(const string& nom, int fam, int energia, int diversio)
    : nom(nom), fam(fam), energia(energia), diversio(diversio)
{
}
