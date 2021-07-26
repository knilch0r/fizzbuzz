CFLAGS=-Wall

TESTS=testn-1 testn-15 testn-100 testn-234 testn-1022

.PHONY: all tests clean

all: fizzbuzz

testn-%: fizzbuzz.c test-fizzbuzz-helper test-fizzbuzz.sh
	./test-fizzbuzz.sh $@

tests: test-printnum $(TESTS)
	./test-printnum

clean:
	rm $(TESTS) test-printnum fizzbuzz test-fizzbuzz-helper

