#include "Shop.h"


Shop::Shop() {
	this->shopProducts.reserve(this->SHOP__MAX_PRODUCTS);

}

Item* Shop::getProduct(int slot) {
	return this->shopProducts[slot];
}

bool Shop::isProductSlotTaken(int slot) {
	return this->getProduct(slot) != nullptr;
}

void Shop::addProduct(Item* item) {
	for (int i = 0; i < this->SHOP__MAX_PRODUCTS; i++){
		Item* currentItem = this->shopProducts[i];
		// Check if item is already in shop; stack if possible
		if (this->isProductSlotTaken(i))
			if (item->stackable && (item->itemId == currentItem->itemId)){
				currentItem->quantity += item->quantity;
				return;
			}
	}

	for (int i = 0; i < this->SHOP__MAX_PRODUCTS; i++)
		if (!this->isProductSlotTaken(i))
			this->shopProducts[i] = item;
}



Item* Shop::buyItem(int productSlot, int amount) {
	Item* item = this->shopProducts[productSlot];
	
	if (item->stackable && item->quantity > amount){
		item->quantity -= amount;
		//this->removeProductSlot(productSlot);
		
		Item* newItem = item->clone();
		newItem->quantity = amount;
		
		return newItem;
	} else Item* newItem = item->clone();
}

Item* Shop::buyItem(int productSlot){
	return Shop::buyItem(productSlot, 1);
}

//int to become money object
int Shop::sellItem(Item* item) {
	// add x of that item to shop products
}
int Shop::sellItem(Item* item, int amount) {
	// add x of that item to shop products
}