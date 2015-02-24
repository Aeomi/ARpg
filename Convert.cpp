#include "Convert.h"

std::string ALib::Convert::toString(int value){
	std::ostringstream stream;
	return (dynamic_cast<std::ostringstream&>(stream << std::dec << value)).str();
}

int ALib::Convert::toInt(std::string value) {

	return atoi(value.c_str());
}

std::vector<std::string> &ALib::Convert::split(const std::string &s, char delim, std::vector<std::string> &elems) {
	std::stringstream ss(s);
	std::string item;
	while (std::getline(ss, item, delim))
		elems.push_back(item);
	return elems;
}

std::vector<std::string> ALib::Convert::split(const std::string &s, char delim) {
	std::vector<std::string> elems;
	split(s, delim, elems);
	return elems;
}