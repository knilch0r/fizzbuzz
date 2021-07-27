CFLAGS=-Wall

TESTS=testn-1 testn-15 testn-100 testn-234 testn-1022 testn-2000 testn-10000 testn-23456 testn-65534

.PHONY: all tests clean testtools

all: fizzbuzz

testtools: fizzbuzz.c test-fizzbuzz-helper test-fizzbuzz.sh
	touch $@

testn-% : testtools
	./test-fizzbuzz.sh $@

tests: $(TESTS)

clean:
	rm -f $(TESTS) fizzbuzz test-fizzbuzz-helper testtools

