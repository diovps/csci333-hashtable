CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: has_test.cpp Entity.o HashTable.o
	$(CPP) $(CFLAGS) -o hash_test

Entity.o: Entity.cpp Entity.h
	$(CPP) $(CLFAGS) -c Entity.cpp

HashTable.o: HashTable.cpp HashTable.h
	$(CPP) $(CFLAGS) -c HashTable.cpp

clean:
	rm -f *.o
	rm hash_test
