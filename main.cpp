
#include <string>

std::string * create();
void use(std::string * value);

int main() {
	for(int i=0;i<10;i++) {
		use(create());
	}
}
