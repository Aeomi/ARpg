#include "Item.h"

Item::Item() {}

Item::Item(int itemId, std::string name, int quantity, int uses){
	this->itemId = itemId;
	this->name = name;
	this->quantity = quantity;
	this->stackable = false;
	this->effects = new Effects(uses);
}

Item::Item(int itemId, std::string name, int quantity, int uses, bool stackable){
	this->itemId = itemId;
	this->name = name;
	this->quantity = quantity;
	this->stackable = stackable;
	this->effects = new Effects(uses);
}

bool Item::isConsumable() {
	return this->effects->consumable;
}

//depreciated; loadItem(itemId)
Item* Item::clone(){
	return new Item(this->itemId, this->name,
		this->quantity, this->effects->uses,this->stackable);
}

