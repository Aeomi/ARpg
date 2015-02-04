#include "Item.h"

Item::Item() {}

Item::Item(std::string name, bool stackable, int uses) {
	this->name = name;uses
	this->stackable = stackable;
	this->effects = new Effects(uses);

}

bool Item::isConsumable() {
	return this->effects->consumable;
}

