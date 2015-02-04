#ifndef __A_INVENTORY
#define __A_INVENTORY

#include <vector>
#include "Item.h"

class Inventory {

	public:
	std::vector<Item*> contents;
	static const int MAX_INVENTORY_SIZE = 32;
	static const int DEFAUT_INVENTORY_SIZE = 4;
	int capacity;

	// Constructers
	Inventory();
	Inventory(int capacity);

	// Getters / Setters
	bool isSlotTaken(int slot);
	Item* get(int slot);
	std::string toString();

	// Mutators
	Item* insert(int slot, Item* item);
	bool insertIntoNext(Item* item);
	Item* remove(int slot);
	Item* replace(int slot, Item* item);

	// Sorting
	bool swapItem(int from, int to);
	bool moveItem(int slot);
	bool splitStack();

};


#endif