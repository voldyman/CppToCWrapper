#include <stdio.h>
#include "../cppWrapper/raryWrap.h"

int main() {

	printf("Calling functions from library\n");
	printf("add: %d\n", addFunc(1, 2));
	printf("sayMyName: %s\n", sayMyName());
	printf("doSomething: ");
	somethingDo();
	printf("\n");
	printf("Done\n");

	return 0;
}
