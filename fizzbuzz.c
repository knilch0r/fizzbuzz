#ifndef P
#ifndef B0
#define I (((((((((((((((B15*2|B14)*2|B13)*2|B12)*2|B11)*2|B10)*2|B9)*2|B8)*2|B7)*2|B6)*2|B5)*2|B4)*2|B3)*2|B2)*2|B1)*2|B0)
#define F __FILE__
#ifndef MAX
#define MAX 100
#endif
#if MAX >= ((1 << 16) - 1)
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
#define B10 0
#define B11 0
#define B12 0
#define B13 0
#define B14 0
#define B15 0
#include <stdio.h>
int main(void) { puts(
#include F
); return 0; }
#endif
#else
#if I <= MAX
#if !(I % 15)
"FizzBuzz"
#elif !(I % 3)
"Fizz"
#elif !(I % 5)
"Buzz"
#else
#define P I
#include F
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
#undef B9
#define B9 0
#if B10 == 1
#undef B10
#define B10 0
#if B11 == 1
#undef B11
#define B11 0
#if B12 == 1
#undef B12
#define B12 0
#if B13 == 1
#undef B13
#define B13 0
#if B14 == 1
#undef B14
#define B14 0
#if B15 == 1
#error overflow
#define OVF
#else
#undef B15
#define B15 1
#endif
#else
#undef B14
#define B14 1
#endif
#else
#undef B13
#define B13 1
#endif
#else
#undef B12
#define B12 1
#endif
#else
#undef B11
#define B11 1
#endif
#else
#undef B10
#define B10 1
#endif
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
#include F
#endif
#endif
#endif
#else
#ifndef PG
#if P < 0 || P > 1000000
#if P < 0
"--------"
#else
"########"
#endif
#else
#define PG
#if P > 100000
#define PD 100000
#include F
#endif
#if P > 10000
#define PD 10000
#include F
#endif
#if P > 1000
#define PD 1000
#include F
#endif
#if P > 100
#define PD 100
#include F
#endif
#if P > 10
#define PD 10
#include F
#endif
#define PD 1
#include F
#undef PG
#undef P
#endif
#else
#if P / PD % 10 == 0
"0"
#elif P / PD % 10 == 1
"1"
#elif P / PD % 10 == 2
"2"
#elif P / PD % 10 == 3
"3"
#elif P / PD % 10 == 4
"4"
#elif P / PD % 10 == 5
"5"
#elif P / PD % 10 == 6
"6"
#elif P / PD % 10 == 7
"7"
#elif P / PD % 10 == 8
"8"
#else
"9"
#endif
#undef PD
#endif
#endif
