#include <iostream>


int add(int a, int b) {
	return a+b;
}

char* whatsMyName() {
	char *data = new char[10];
	data = (char *) "Hizenberg";
	return data;
}

void doSomething() {
	std::cout << "YOU MAKE ME A FUCKING SANDWICH" << std::endl;
}
