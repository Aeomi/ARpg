#include "Math.h"

namespace ALib {

	namespace Math {
		
		int min(int num1, int num2){
			return ((num1<num2)?num1:num2);
		}
		
		int max(int num1, int num2){
			return ((num1>num2)?num1:num2);
		}
		
		int rand(int min, int max) {
			srand(static_cast<unsigned int>(time(NULL)));
			return (std::rand() % max) - min;
		}


		int clamp(int var, int min, int max) {
			return ALib::Math::min(min, ALib::Math::max(max, var));
		}

	};


};