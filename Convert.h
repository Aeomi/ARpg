#ifndef __A_CONVERT
#define __A_CONVERT

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>

namespace ALib {
	namespace Convert {

		std::string toString(int value);
		int toInt(std::string value);

		std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);
		std::vector<std::string> split(const std::string &s, char delim);


	}
}

#endif
