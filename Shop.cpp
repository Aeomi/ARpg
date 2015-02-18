#include "Shop.h"


Shop::Shop() {
	//for (int i = 0; i < this->SHOP__MAX_PRODUCTS; this->inventory[i++] = NULL);

}

Item* Shop::getProduct(int slot) {
	return this->inventory->get(slot);
}

bool Shop::isProductSlotTaken(int slot) {
	return this->inventory->isSlotTaken(slot);
}

void Shop::addProduct(Item* item) {

	for (int i = 0; i < this->SHOP__MAX_PRODUCTS; i++)
		if (this->isProductSlotTaken(i)){
			Item* currentItem = this->getProduct(i);
			if (item->stackable && (item->name.compare(currentItem->name) == 0)){	// Change from .name to .itemId
				currentItem->quantity += item->quantity;
				//delete item;
				return;
			}
		}
	
	for (int i = 0; i < this->SHOP__MAX_PRODUCTS; i++)
		if (!this->isProductSlotTaken(i)){
			this->inventory->insert(i, item);
			return;
		}

}

Item* Shop::removeProduct(int slot) {
	return this->inventory->remove(slot);
}



Item* Shop::buyItem(int productSlot, int amount) {
	Item* item = this->getProduct(productSlot);
	
	if (item->stackable){
		if (item->quantity >= amount){
			item->quantity -= amount;

			Item* newItem = item->clone();
			newItem->quantity = amount;
			
			if (item->quantity == amount)
				this->removeProduct(productSlot);
			
			return newItem;
		} else return NULL;
	}
	
	Item* newItem = item->clone();
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