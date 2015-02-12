#ifndef __A_MATH
#define __A_MATH

#include <iostream>
#include <time.h>
#include <cstdlib>


namespace ALib {

	namespace Math {

		int min(int num1, int num2);
		int max(int num1, int num2);

		int rand(int min, int max);

		int clamp(int var, int min, int max);

	};


};

#endif