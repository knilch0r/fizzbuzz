#ifndef B0

#define I (((((((((B9*2|B8)*2|B7)*2|B6)*2|B5)*2|B4)*2|B3)*2|B2)*2|B1)*2|B0)
#ifndef MAX
#define MAX 100
#endif

#if MAX + 1 > ((1 << 10) - 1)
#error MAX too high
#else
#define B0 1
#define B1 0
#define B2 0
#define B3 0
#define B4 0
#define B5 0
#define B6 0
#define B7 0
#define B8 0
#define B9 0

#include <stdio.h>
int main(void) {
	puts(
#include __FILE__
	);
	return 0;
}
#endif
#else

#if I < MAX+1
#if !(I % 15)
"FizzBuzz"
#elif !(I % 3)
"Fizz"
#elif !(I % 5)
"Buzz"
#else
#define PRINTNUM I
#include "printnum.h"
#endif

#if I < MAX
"\n"
#endif

#if B0 == 1
#undef B0
#define B0 0
#if B1 == 1
#undef B1
#define B1 0
#if B2 == 1
#undef B2
#define B2 0
#if B3 == 1
#undef B3
#define B3 0
#if B4 == 1
#undef B4
#define B4 0
#if B5 == 1
#undef B5
#define B5 0
#if B6 == 1
#undef B6
#define B6 0
#if B7 == 1
#undef B7
#define B7 0
#if B8 == 1
#undef B8
#define B8 0
#if B9 == 1
#error overflow
#define OVF
#else
#undef B9
#define B9 1
#endif
#else
#undef B8
#define B8 1
#endif
#else
#undef B7
#define B7 1
#endif
#else
#undef B6
#define B6 1
#endif
#else
#undef B5
#define B5 1
#endif
#else
#undef B4
#define B4 1
#endif
#else
#undef B3
#define B3 1
#endif
#else
#undef B2
#define B2 1
#endif
#else
#undef B1
#define B1 1
#endif
#else
#undef B0
#define B0 1
#endif

#ifndef OVF
#include __FILE__
#endif

#endif
#endif
