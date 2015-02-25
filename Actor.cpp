#include "Actor.h"

using namespace std;


//| Constructors
Actor::Actor(string name) {

	this->type = "Actor";
	this->name = name;
	
	for (int i = 0; i < 5; i++) this->stats[i] = nullstat;	// Sets stats to default (-1)

	this->alive = true;
	this->inventory = new Inventory(INVENTORY_DEFAULT_SIZE);
	//this->equipment = new Equipment();
};


double Actor::attack(Actor* target) {
	// Damage base: st

	double damage = 0;
	damage += this->getStrength();

	return this->hurt(Damage(damage, this->getLevel() * 4));
}


double Actor::hurt(Damage dmg) {
	// Damage threshold:  dt = def/8		// dmg = 0 if dmg < dt	
	// Damage resistence: dr = def			// dmg -= dr

	double damage = 0;
	double dt = this->getDefence()*0.15;
	double dr = this->getDefence();

	damage += dmg.getPreciseAmount();
	damage -= dt + dr;

	damage = ALib::Math::clamp((int)(damage), 0, this->getHealth());
	this->setHealth(this->getHealth() - damage);
	//if (this->getHealth() <= 0) this->alive = false; Ask this outside of class!
	return damage;
}


//| Getters & Setters
string Actor::getName() { 
	return this->name; 
}

int Actor::getLevel() {
	return this->stats[LEVEL];
}

int Actor::getExp(){
	return this->stats[EXP];
}

int Actor::getHealth() {
	return this->stats[HEALTH];
}

int Actor::getStrength() { 
	return this->stats[STRENGTH]; 
}

int Actor::getDefence() { 
	return this->stats[DEFENCE]; 
}


void Actor::setName(string name) {
	this->name = name;
}

void Actor::setLevel(int level) {
	this->stats[LEVEL] = level;
}

void Actor::setExp(int exp) {
	this->stats[EXP] = exp;
}

void Actor::setHealth(int health) {
	this->stats[HEALTH] = health;
}

void Actor::setStrength(int strength) {
	this->stats[STRENGTH] = strength;
}

void Actor::setDefence(int defence) {
	this->stats[DEFENCE] = defence;
}

Inventory* Actor::getInventory() {
	return this->inventory;
}

Inventory* Actor::setInventory(Inventory *inventory) {
	Inventory *oldInventory = this->inventory;
	this->inventory = inventory;
	return oldInventory;
}

Inventory* Actor::removeInventory() {
	Inventory *oldInventory = this->inventory;
	this->setInventory(new Inventory(INVENTORY_DEFAULT_SIZE));
	return oldInventory;
}

bool Actor::isAlive() { 
	return this->alive; 
}

string Actor::toString() {
	return "Name: "	 + this->name + "\n\t"
		+ "Type:\t\t"   + this->type + "\n\t"
		+ "Level:\t\t"  + ALib::Convert::toString(this->getLevel()) + "\n\t"
		+ "Exp:\t\t"	+ ALib::Convert::toString(this->getExp()) + "\n\t"
		+ "Health:\t\t" + ALib::Convert::toString(this->getHealth()) + "\n\t"
		+ "Strength:\t" + ALib::Convert::toString(this->getStrength()) + "\n\t"
		+ "Defence:\t"  + ALib::Convert::toString(this->getDefence()) + "\n";
}
