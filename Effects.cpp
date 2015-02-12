#include "Effects.h"


Effects::Effects(int uses) {
	for (int i = 0; i < 5; i++) this->stats[i] = 0;
	// Randomiser;fix
	if (uses > 1) this->uses = uses;// + round(ALib::Math::rand(-uses / 4, uses / 4));
	else this->consumable = true;


}

void Effects::level(int val) {
	this->stats[LEVEL] = val;
}

void Effects::exp(int val) {
	this->stats[EXP] = val;
}

void Effects::health(int val) {
	this->stats[HEALTH] = val;
}

void Effects::strength(int val) {
	this->stats[STRENGTH] = val;
}

void Effects::defence(int val) {
	this->stats[DEFENCE] = val;
}

