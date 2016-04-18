all: createTable

createTable: tableMaker.o sqlite3.o
	g++ -lpthread -ldl -o crateTable tableMaker.o sqlite3.o

tableMaker.o: tableMaker.cpp sqlite3.h
	g++ -c tableMaker.cpp

sqlite3.o: sqlite3.h sqlite3.c
	gcc -c sqlite3.c
