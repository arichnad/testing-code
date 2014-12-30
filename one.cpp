#include <string>
#include <cstdio>


std::string * create() {
	std::string * value = new std::string();
	//printf("value one = %x\n", value->c_str());
	return value;
}
