#include <err.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
	int i, max;

	if (argc != 2) errx(1, "expected one argument");

	max = atoi(argv[1]);

	for (i = 1; i <= max; i++) {
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

