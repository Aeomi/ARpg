#ifndef __A_ITEMPROTO
#define __A_ITEMPROTO

#include "Item.h"
#include "Effects.h"
#include <string>


class ItemProto : public Item {
	public:
	int quantity;

	ItemProto(Item item);
	ItemProto(Item item, int quantity);
	ItemProto(Item item, int quantity, Effects effects);

};


#endif