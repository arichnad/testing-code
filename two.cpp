#include <string>
#include <cstdio>

void use(std::string * value) {
	//printf("value two = %x\n", value->c_str());
	delete value;
	value = new std::string();
	//printf("value two = %x\n", value->c_str());
	delete value;
	/*
	for(int i=0;i<100;i++) {
		(*value)+="a";
	}
	*/
}
