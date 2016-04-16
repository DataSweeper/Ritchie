# the Compiler
CC = gcc

CFLAGS = -std=c99 -Wall
INCLUDE = -I/personal/MY-GIT/Ritchie/buildourownlisp/variables/include
OUTPUT = variables

all:
	$(CC) -c $(CFLAGS) $(INCLUDE) src/variables.c -o obj/variables.o
	$(CC) -c $(CFLAGS) $(INCLUDE) src/mpc.c -o obj/mpc.o
	$(CC) obj/*.o -ledit -lm -o $(OUTPUT)

clean:
	rm obj/*.o $(OUTPUT)
