#include "../cppLib/rary.hpp"

extern "C" {
int addFunc(int a, int b) {
	return add(a, b);
}

char* sayMyName() {
	return whatsMyName();
}

void somethingDo() {
	doSomething();
}

}
