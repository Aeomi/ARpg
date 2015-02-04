#include "Math.h"

namespace ALib {

	namespace Math {

		int rand(int min, int max) {
			srand(static_cast<unsigned int>(time(NULL)));
			return (std::rand() % max) - min;
		}


		int clamp(int var, int min, int max) {
			return (int)std::fmax(min, std::fmin(max, var));
		}

	};


};