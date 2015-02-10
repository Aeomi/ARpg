#include <iostream>
#include "Actor.h"
#include "Inventory.h"
#include "Shop.h"
#include "Item.h"
#include <string>
#include "Game.h"

using namespace std;

int main() {
	
	//Actor pl = Actor("ayu");
	
	string str = std::to_string(10);
	cout << str << endl;
	
	
	cout << "\n\nARpg terminated" << endl;
	return 0;
}



/*
int main() {

	Shop shop = Shop();

	// Make items add to shop like this until you make a ResourceLoader class that loads items from files
	//Item herpesCannon = Item(1, "Herpes Cannon", 1, 100);
	//herpesCannon.effects->strength(69);
	//shop.addProtoItem(herpesCannon, 1);
	
	//hop.addProtoItem(Item("Sword", 100), 1);

	/*Item* shop[2][2] = {
		{ //	Offensive
			new Item("Herpes Cannon", 100),
			new Item("Sword", 100)
		}, 
		{ //	Defensive
			new Item("Iron Chestplate", 400),
			new Item("Dragonsteel Izai Armor", 400)
		}
	};*/
	/*
	shop[0][0]->effects->strength(666);
	shop[0][1]->effects->strength(25);
	shop[1][0]->effects->defence(40);
	shop[1][1]->effects->defence(512);

	Inventory* bag = new Inventory(8);

	Actor* Ayu = new Actor("Ayu");
	Ayu->setLevel(1);	 Ayu->setExp(0);	 Ayu->setHealth(100); 
	Ayu->setStrength(10); Ayu->setDefence(5); //Ayu->setInventory(bag);
	

	cout << "\t\t-= ARpg Initiated =-" << endl;

	while (true){

		string in;
		cout << "/> "; 
		cout.flush();
		cin >> in;


		// Commands
		if (in == "quit") break;
/*
		if (in == "stats") Game::Print::info(Ayu);

		if (in == "attack") Game::Combat::attack(Ayu, Ayu);

		if (in == "inventory") Game::Print::inventory(Ayu->inventory);

		if (in == "info"){
			cout << "Info: [0:Item]" << endl;
			cout << "/> "; cin >> in;

			if (in == "0"){
				int itemSlot;
				cout << "Item slot to inspect: "; cin >> itemSlot;

				Game::Print::info(Ayu->inventory->get(itemSlot));
			}
		}

		/*if (in == "buy"){
			for (int type = 0; type < 2; type++)
				for (int itm = 0; itm < 2; itm++){
					cout << "[" << type << "]" << "[" << itm << "] ";
					//out << shop[type][itm]->name << endl;
				}

			cout << "\nEnter item to buy (offence or defence) [0/1]: ";
			int desiredItem_type = 0;
			cin >> desiredItem_type;

			cout << "\nEnter item to buy [#]: ";
			int desiredItem_num = 0;
			cin >> desiredItem_num;

			cout << "[" << desiredItem_type << "]";
			cout << "[" << desiredItem_num << "]" << endl;

			Item* newItem = shop[desiredItem_type][desiredItem_num];
			
			shop[desiredItem_type][desiredItem_num] = nullptr; // Attempt to destroy shop contents
			//delete shop[desiredItem_type][desiredItem_num];	   // 

			bool didBuy = false;
			didBuy = Ayu->inventory->insertIntoNext(newItem);
			cout << newItem->name << " was bought" << endl;
		
		}




	} // End Gameloop


	cout << "\n\nARpg Terminated" << endl;
	//system("pause");
	return 0;
};*/