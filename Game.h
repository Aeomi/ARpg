#ifndef __A_GAME
#define __A_GAME

#include <iostream>
#include <string>
#include "Actor.h"
#include "item.h"
#include "Inventory.h"


namespace Game {

	//	Combat
	namespace Combat {

		bool attack(Actor *source, Actor *target);

	}

	//	Input / Output
	namespace IO {

		bool getConfirm();
		void wait();

	}

	//	Print
	namespace Print {

		void item(Item* item);
		void info(Item* item);

		void inventory(Inventory* inventory);

		void info(Actor* actor);
		//void info(Player* player);

	}


};

#endif