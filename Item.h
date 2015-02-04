#ifndef __A_ITEM
#define __A_ITEM

#include <string>
#include "Effects.h"


class Item {

	public:
	std::string name;
	std::string itemClass;
	int itemID;
	float baseValue;
	Effects* effects;
	bool stackable;
	int quantity;

	Item();
	Item(std::string name, int uses);

	bool isConsumable();

};

#endif
