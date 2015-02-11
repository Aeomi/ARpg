#include "Convert.h"

//template <class T>
std::string ALib::Convert::toString(int value){
	std::ostringstream stream;
	return (dynamic_cast<std::ostringstream&>(stream << std::dec << value)).str();
}