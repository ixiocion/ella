
objects = object/token.o

all: $(objects)

object/token.o: src/token.c
	gcc -O3 -c -o object/token.o src/token.c