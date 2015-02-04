#ifndef __A_ACTOR
#define __A_ACTOR
#define nullstat -1

#include <string>
#include "Inventory.h"
#include "Damage.h"
#include "Math.h"

class Actor {

	/*
	int level;
	int exp;
	int health;
	int strength;
	int defence;

	Inventory *inventory
	Equipment *equipment
	*/

	public: // Make Private
	std::string type;
	std::string name;
	int stats[5];
	bool alive;
	Inventory *inventory;
	//Equipment *equipment;

	public:
	const int INVENTORY_DEFAULT_SIZE = 4;
	enum stats { LEVEL, EXP, HEALTH, STRENGTH, DEFENCE };

	Actor(std::string name);

	double attack(Actor* target);

	double hurt(Damage dmg);


	std::string getName();
	int getLevel();
	int getExp();
	int getHealth();
	int getStrength();
	int getDefence();

	bool isAlive();

	Inventory* getInventory();
	//Equipment* getEquipment();


	void setName(std::string name);
	void setLevel(int level);
	void setExp(int exp);
	void setHealth(int health);
	void setStrength(int strength);
	void setDefence(int defence);

	Inventory* setInventory(Inventory *inventory);
	Inventory* removeInventory();

	std::string toString();

};

#endif
