#include "ItemProto.h"

ItemProto::ItemProto(Item item) {
	__super::Item(item.name, item.effects->uses);
	this->quantity = 1;
}

ItemProto::ItemProto(Item item, int quantity) {
	__super::Item(item.name, item.effects->uses);
	this->quantity = quantity;
}

ItemProto::ItemProto(Item item, int quantity, Effects effects) {
	__super::Item(item.name, item.effects->uses);
	this->quantity = quantity;
	this->effects = &effects;
}