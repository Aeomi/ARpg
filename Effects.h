#ifndef __A_EFFECTS
#define __A_EFFECTS

#include "Math.h"
#include <iostream>
#include <string>
#include <math.h>

// Item - Effects
class Effects {

	public:
	enum STATS {LEVEL, EXP, HEALTH, STRENGTH, DEFENCE};
	int stats[5];
	int uses;
	bool consumable = false;

	Effects();
	Effects(int uses, bool consumable);

	bool isConsumable();
	void level(int val);
	void exp(int val);
	void health(int val);
	void strength(int val);
	void defence(int val);
	

};


#endif