#include "Damage.h"


//| Constructors
Damage::Damage(int amount, int rndExtent) {
	this->amount = amount + ALib::Math::rand(-rndExtent, rndExtent);
}

Damage::Damage(double amount, int rndExtent) {
	this->preciseAmount = amount + ALib::Math::rand(-rndExtent, rndExtent);
}


//| Getters
int Damage::getAmount() { return this->amount; }
double Damage::getPreciseAmount() { return this->preciseAmount; }