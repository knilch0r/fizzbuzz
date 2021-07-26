#ifndef PRINTNUM_DOIT

#ifndef PRINTNUM
#error no PRINTNUM
#endif

#if (PRINTNUM < 0) || (PRINTNUM > 1000000)
#if PRINTNUM < 0
"--------"
#else
"########"
#endif
#else

#define PRINTNUM_DOIT
#if PRINTNUM > 1000000
"#"
#endif
#if PRINTNUM > 100000
#define PRINTNUM_DIV 100000
#include __FILE__
#endif
#if PRINTNUM > 10000
#define PRINTNUM_DIV 10000
#include __FILE__
#endif
#if PRINTNUM > 1000
#define PRINTNUM_DIV 1000
#include __FILE__
#endif
#if PRINTNUM > 100
#define PRINTNUM_DIV 100
#include __FILE__
#endif
#if PRINTNUM > 10
#define PRINTNUM_DIV 10
#include __FILE__
#endif
#define PRINTNUM_DIV 1
#include __FILE__

#undef PRINTNUM_DOIT
#undef PRINTNUM
#endif

#else /* PRINTNUM_DOIT */

#if PRINTNUM / PRINTNUM_DIV % 10 == 0
"0"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 1
"1"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 2
"2"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 3
"3"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 4
"4"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 5
"5"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 6
"6"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 7
"7"
#elif PRINTNUM / PRINTNUM_DIV % 10 == 8
"8"
#else /* PRINTNUM / PRINTNUM_DIV % 10 == 9 */
"9"
#endif

#undef PRINTNUM_DIV
#endif /* PRINTNUM_DOIT */

