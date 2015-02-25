#include "ResourceLoader.h"
#include <iostream>

ResourceLoader::ResourceLoader() {

}

Item* ResourceLoader::loadItem(int itemId) {
	std::stringstream itemTitle;	//name

	// Get info from file

	if (_WIN32) itemTitle << "resources\\databases\\items\\";
	else itemTitle << "resources/databases/items/";

	itemTitle << itemId << ".a.item";

	std::ifstream itemFile(itemTitle.str());	// Got Item File
	
	if (!itemFile.is_open()) return NULL;		// Fuck off if file didn't open; might not exist.

	std::string fileData; {						// Generate fileData
		std::stringstream fileDataBuffer;
		fileDataBuffer << itemFile.rdbuf();
		fileData = fileDataBuffer.str();
	}

	// Generate Item using info
	std::string name;
	bool consumable;
	int quantity = 1;
	int uses;
	bool stackable;
	int itemStats[5];

	std::vector<std::string> strData = ALib::Convert::split(fileData, ',');

	name		= strData[1];
	consumable	= !! ALib::Convert::toInt(strData[2]); // !! Converts int to bool
	uses		= ALib::Convert::toInt(strData[3]);
	stackable	= !! ALib::Convert::toInt(strData[4]);

	for (unsigned int i = 5; i < strData.size(); i++)
		itemStats[i] = ALib::Convert::toInt(strData[i]);

	return new Item(itemId, name, consumable, quantity, uses, stackable);

}

void ResourceLoader::writeItem(Item* item) {
	std::stringstream itemTitle;
	itemTitle << "resources\\databases\\items\\" << item->itemId << ".a.item";

	std::ofstream itemFile;
	
	itemFile.open(itemTitle.str());
	itemFile.clear();


	itemFile << item->itemId	<< ','
		<< item->name			<< ','
		<< item->isConsumable() << ','
		<< item->effects->uses	<< ','
		<< item->stackable		<< ',';


	//Stats
	for (int i = 0; i < 5; i++){
		int itemEffect = item->effects->stats[i];
		itemFile << itemEffect << ',';
	}
	itemFile.close();

}