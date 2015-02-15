#include "Convert.h"

std::string ALib::Convert::toString(int value){
	std::ostringstream stream;
	return (dynamic_cast<std::ostringstream&>(stream << std::dec << value)).str();
}
