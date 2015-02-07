#ifndef __A_SHOP
#define __A_SHOP

#include <iostream>
#include <vector>
#include "Item.h"

class Shop {

	public:
	std::vector<Item*> shopProducts;
	const int SHOP__MAX_PRODUCTS = 64;
	//double 

	Shop();

	Item* getProduct(int slot);
	bool isProductSlotTaken(int slot);
	void addProduct(Item* item);
	Item* removeProduct(int slot);

	Item* buyItem(int productSlot);
	Item* buyItem(int productSlot, int amount);

	// Change int to currency object
	// Ask user if they want to sell more than 1
	int sellItem(Item*);
//Update:SGit
	void stackStackables();
};




#endif