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

		if (this->isProductSlotTaken(i)){
			if (item->stackable && (item->itemID == currentItem->itemID)){
				item->quantity += nItem->quantity;
				return;
				//this.stackItems(); // Go through items and stack stackables ^ makes redund
			}
		} else this->shopProducts[i] = newItemProto;
	}

}

Item* Shop::buyItem(int slot) { //clone + return item like lua
	Item* itemProto = this->shopProducts[slot];
	Item* newItem = new Item(itemProto->name, itemProto->effects->uses);
	newItem->effects = itemProto->effects; // Don't know if this will work, might be redund
	return newItem;
}

//int to become money object
int Shop::sellItem(Item item, int amount) {
	// add x of that item to shop products
}
