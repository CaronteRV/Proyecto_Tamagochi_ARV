#pragma once
#include <string>
using namespace std;

class Tamagochi {
private:
    string nom;
    int fam;
    int energia;
    int diversio;

public:
    Tamagochi();

    void donarMenjar();
    void jugar();
    void dormir();
    void mostrarEstat() const;
    void simularPasTemps();

private:
    string calcularEstatAnim() const;
public:
    Tamagochi(const string& nom, int fam, int energia, int diversio)
        : nom(nom), fam(fam), energia(energia), diversio(diversio);
};