#include <iostream>
#include <string>
#include <algorithm>

// Classe Critter
class MommyZani {
private:
	std::string name;
	int hunger;
	int happiness;
	int energy;

public:
	// Constructor
	MommyZani(const std::string& name)
		: name(name), hunger(50), happiness(50), energy(50) {}

	// Mètodes per interectuar amb el Tamagochi
	void feed() {
		hunger = std::max(0, hunger - 10);
		std::cout << name << " està més saciat! Gana: " << hunger << std::endl;
	}

	void play() {
		if (energy > 10) {
			happiness = std::min(100, happiness + 10);
			energy -= 10; 
			std::cout << name << " s'\ho està passant genial! Felicitat: " << happiness 
					  << ", Energia: " << energy << std::endl;
		}
		else {
			std::cout << name << " està massa cansat per jugar!" << std::endl;
		}

	}
};