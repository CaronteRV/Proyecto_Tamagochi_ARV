#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tamagochi
{
public:
	Tamagochi(int nivell);
	void hablar();
	double happiness();
	double hunger();	
private:
	double nivellFelicitat;
	string nom = "26.1.14.9";

};

