#include "Item.h"

Item::Item() {}

Item::Item(std::string name, int uses) {
	this->name = name;
	this->effects = new Effects(uses);

}

bool Item::isConsumable() {
	return this->effects->consumable;
}