#ifndef __A_RESOURCELOADER
#define __A_RESOURCELOADER


#include "Item.h"
#include <fstream>
#include <sstream>
#include <string>
#include "Effects.h"
#include "Convert.h"


class ResourceLoader {
	public:

	ResourceLoader();

	Item* loadItem(int itemId);
	void writeItem(Item* item);
};

#endif