#ifndef __A_RESOURCELOADER
#define __A_RESOURCELOADER

#ifndef _WIN32 
#define _WIN32 0 
#endif

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

#endif
