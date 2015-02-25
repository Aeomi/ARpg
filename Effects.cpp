#include "Effects.h"


Effects::Effects(int uses, bool consumable) {
	for (int i = 0; i < 5; i++) this->stats[i] = NULL;

	this->uses = uses;
	this->consumable = consumable;

	// Randomiser;fix
	/*if (uses >= 1) this->uses = uses;	//round(ALib::Math::rand(-uses / 4, uses / 4));
	else this->consumable = true;*/
}

void Effects::setStatArray(int statArray[5]) {

	for (int i = 0; i < 5; i++)
		this->stats[i] = statArray[i];

}

void Effects::level(int value) {
	this->stats[LEVEL] = value;
}

void Effects::exp(int value) {
	this->stats[EXP] = value;
}

void Effects::health(int value) {
	this->stats[HEALTH] = value;
}

void Effects::strength(int value) {
	this->stats[STRENGTH] = value;
}

void Effects::defence(int value) {
	this->stats[DEFENCE] = value;
}

