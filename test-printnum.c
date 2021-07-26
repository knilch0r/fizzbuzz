#include <stdio.h>
#include <string.h>

char * c12345 =
#define PRINTNUM 12345
#include "printnum.h"
;
char c0[] =
#define PRINTNUM 0
#include "printnum.h"
;
char * c987 =
#define PRINTNUM 987
#include "printnum.h"
;
char c6054[] =
#define PRINTNUM 6054
#include "printnum.h"
;
int main(void) {
	int fail = 0;
#define TEST(x) \
	if (strcmp(c ## x, # x)) fail |= printf("FAIL: expected " # x ", got %s!\n", c ## x);

	TEST(0)
	TEST(12345)
	TEST(987)
	TEST(6054)

	return fail || (puts("ALL TESTS SUCCESSFUL"), 0);
}

