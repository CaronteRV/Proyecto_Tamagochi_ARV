#include "MyHeader.h"
#include "Tamagochi.h"

Tamagochi::Tamagochi(int nivellInicial, int moneyInicial) {
    nivellFelicitat = nivellInicial;
    nivellGana = 50; // Gana inicial a un valor mitjà
    money = moneyInicial; // Iniciem amb els diners
}

void Tamagochi::hablar() {
    cout << "Hola! Em dic " << nom << "." << endl;
    cout << "El meu nivell de felicitat es " << nivellFelicitat << "." << endl;
    cout << "El meu nivell de gana es " << nivellGana << "." << endl;
    cout << "Tens " << money << " diners." << endl;
    
    
    cout << "El meu estat d\'anim es: " << calcularEstatAnim() << "." << endl;
    
    if (nivellGana > 80) {
        cout << "Estic molt afamat... no tens res per picar!?" << endl;
    }
    if (nivellFelicitat < 30) {
        cout << "Em sento molt avorrit i trist..." << endl;
    }
}   

void Tamagochi::happiness() {
    if (nivellFelicitat < 100) {
        nivellFelicitat += 10; // Augmentem la felicitat
        cout << "Has jugat amb el tamagotchi! La seva felicitat ha augmentat." << endl;
    } else {
        cout << "El tamagotchi ja es molt feliç!" << endl;
    
    }
}

void Tamagochi::hunger() {
    if (nivellGana < 100) {
        nivellGana += 10; // Augmentem la gana
        cout << "Has donat menjar al tamagotchi! Ara te mes energia." << endl;
    } else {
        cout << "El tamagotchi ja esta ple!" << endl;
    }
}

void Tamagochi::jugar()
{
    cout << "Estas jugant amb el tamagotchi!" << endl;

    if (nivellFelicitat > 50 || nivellGana < 30) {
        money += 30;
        cout << "Bravo! Has guanyat 30 unitats de diners per jugar amb el tamagotchi!" << endl;
    } else {
        cout << "No has guanyat diners aquesta vegada." << endl;
    }

    if (nivellFelicitat < 100) {
        nivellFelicitat += 10;
    }
}

void Tamagochi::donarMenjar() {
    const double costMenjar = 20.0;


    if (money >= costMenjar) {
        money -= costMenjar;
        nivellGana -= 10;
        if (nivellGana < 0) nivellGana = 0;
        cout << "Has donat menjar al tamagotchi. Ara te menys gana." << endl;
    }
    else {
        cout << "No tens prou diners per donar menjar al tamagotchi!" << endl;
    }
}

// Funció privada per calcular l'estat d'ànim
string Tamagochi::calcularEstatAnim() {
    if (nivellFelicitat > 80 && nivellGana < 30) {
        return "Feliç";
    }
    else if (nivellFelicitat > 50 && nivellGana < 60) {
        return "Content";
    }
    else if (nivellFelicitat > 30 || nivellGana < 80) {
        return "Trist";
    }
    else {
        return "Boig"; // Si la felicitat és molt baixa o la gana molt alta
    }
}

void Tamagochi::simularPasTemps() {

    if (nivellFelicitat > 0) {
        nivellFelicitat -= 1;
    }
    if (nivellGana < 100) {
        nivellGana += 2;
    }
}

void Tamagochi::dormir()
{
}

void Tamagochi::beure()
{
}

void Tamagochi::airelliure()
{
}

void Tamagochi::mostrarValors()
{
}


