#!/bin/bash
NUM=${1/testn-}
if [ -z "$NUM" ] ; then
	echo nope ; exit 1
fi
set -e
gcc -DMAX=$NUM -Wall -fmax-include-depth=$(($NUM + 100)) fizzbuzz.c -o testn-$NUM
./testn-$NUM > testn-$NUM.out
./test-fizzbuzz-helper $NUM > testn-$NUM.ref
if diff -u testn-$NUM.out testn-$NUM.ref ; then
	echo test $NUM: SUCCESS
else
	echo test $NUM: FAILED
	exit 1
fi
rm testn-$NUM.out testn-$NUM.ref

