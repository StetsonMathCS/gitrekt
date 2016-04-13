all: wrapper

wrapper.o: wrapper.cpp wrapper.h
	g++ -c wrapper.cpp

wrapper: wrapper.o
	g++ -std=c++0x -lgit2 -g -Wall -o wrapper wrapper.o

.PHONY: clean docs

clean:
	rm -f *.o wrapper
