#include "Game.h"

namespace Game {

	//	Combat
	namespace Combat {

		bool attack(Actor* source, Actor* target) {
			if (!(source->isAlive() && target->isAlive())) {
				std::cout << "Unable to attack dead actor" << std::endl;
				return false;
			}
			double dmg = source->attack(target);
			std::cout << source->getName() << " attacked " << target->getName() << std::endl;
			std::cout << target->getName() << " received " << dmg << " damage" << std::endl;
			return true;
		}

	};

	//	Input / Output
	namespace IO {

		bool getConfirm() {
			char response;
			while (true) {
				std::cin >> response;
				if (response == 'y') return true;
				else if (response == 'n') return false;
				else std::cout << "/> Invalid Option. Valid Format: y/n" << std::endl;
			}
		}

		void wait() {
			std::cin.ignore('\n');
		}

	};

	//	Printing
	namespace Print {

		// Actors:
		void info(Actor* actor) {
			std::cout << actor->toString();
		}

		//void info(Player* player) {
			//std::cout << player->toString();
		//}
		
		void inventory(Inventory* inventory) {
			std::cout << inventory->toString() << std::endl;
		}

		// Items:
		void item(Item* item) {
			std::cout << item->name << std::endl;
		}

		void info(Item* item) {

			std::string EFFECT_NAMES[5] = {"Level", "Exp", "Health", "Strength", "Defence"};

			std::string result = item->name + " effects:\n";
			for (int i = 0; i < sizeof(item->effects->stats)/4; i++)
				if (item->effects->stats[i] != nullstat)
					result += "\t" + EFFECT_NAMES[i] + ": " + std::to_string(item->effects->stats[i]) + "\n";

			result += "\tUses: " + std::to_string(item->effects->uses) + "\n\tConsumable: ";
			if (item->isConsumable()) result += "true\n"; else result += "false\n";
			std::cout << result << std::endl;
		}



	}

};
