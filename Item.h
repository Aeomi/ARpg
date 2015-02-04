#ifndef __A_ITEM
#define __A_ITEM

#include <string>
#include "Effects.h"


class Item {

	public:
	std::string name;
	//std::string itemClass;
	int itemId;
	//float baseWorth;
	Effects* effects;
	bool stackable;
	int quantity;

	Item();
	Item(int itemId, std::string name, int quantity, int uses);
	Item(int itemId, std::string name, int quantity, int uses, bool stackable);

	bool isConsumable();
	
	Item* clone();
	
};

#endif