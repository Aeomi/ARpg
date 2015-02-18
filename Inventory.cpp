#include "Inventory.h"


// Constructors
Inventory::Inventory() {
	this->capacity = DEFAUT_INVENTORY_SIZE;
	this->contents.reserve(DEFAUT_INVENTORY_SIZE);
	for (int i = 0; i < this->DEFAUT_INVENTORY_SIZE; this->contents[i++] = nullptr);
}

Inventory::Inventory(int capacity) {
	this->capacity = capacity;
	this->contents.reserve(capacity);
	for (int i = 0; i < this->capacity; this->contents[i++] = nullptr);
}

// Getters / Setters
bool Inventory::isSlotTaken(int slot){
	return (this->contents[slot] != nullptr); 
}

Item* Inventory::get(int slot){ 
	return this->contents[slot]; 
}

std::string Inventory::toString() {
	std::stringstream result;

	for (int i = 0; i < this->capacity; i++) {
		if ((i + 1) % 2 == 0) result << std::setw(20);
		result << "Slot " << i << ":  ";
		result << std::setw(15);


		if (this->isSlotTaken(i)) result << this->get(i)->name << " x" << this->get(i)->quantity;
		if (( i + 1) % 2 == 0) result << "\n";

		//result.fill('x');
	}

	
	return result.str();
}


// Mutators
Item* Inventory::insert(int slot, Item* item) {
	Item* oldItem = this->get(slot);
	this->contents[slot] = item;
	return oldItem;
}

bool Inventory::insertIntoNext(Item* item) {
	for (int i = 0; i < this->capacity; i++)
		if (!this->isSlotTaken(i)){ this->contents[i] = item; return true; }
	return false;
}

Item* Inventory::remove(int slot) {
	Item* oldItem = this->get(slot);
	this->contents[slot] = nullptr;
	return oldItem;
}

