#include "Item.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <string>
#include "Effects.h"
#include "Convert.h"

class ResourceLoader {
	public:

	ResourceLoader();

	Item* loadItem(int itemId);
	void writeItem(Item* item);
};

