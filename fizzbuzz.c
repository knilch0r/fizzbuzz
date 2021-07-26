#ifndef MAX
#define MAX 100
#endif

#include <stdio.h>

int main(void) {
	int i;

	for (i = 1; i < MAX+1; i++) {
		if (i % 15 == 0) {
			puts("FizzBuzz");
		} else if (i % 3 == 0) {
			puts("Fizz");
		} else if (i % 5 == 0) {
			puts("Buzz");
		} else {
			printf("%d\n", i);
		}
	}
	return 0;
}
