#ifndef __A_DAMAGE
#define __A_DAMAGE

#include "Math.h"

class Damage {

	private:
	int amount;
	double preciseAmount;

	public:
	Damage(int amount, int rndExtent);

	Damage(double amount, int rndExtent);

	int getAmount();
	double getPreciseAmount();

};


#endif
