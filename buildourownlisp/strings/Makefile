# the Compiler
CC = gcc

OBJDIR = obj
CFLAGS = -std=c99 -Wall
INCLUDE = -I/personal/MY-GIT/Ritchie/buildourownlisp/variables/include
OUTPUT = lispy

all:
	mkdir -p $(OBJDIR)
	$(CC) -c $(CFLAGS) $(INCLUDE) src/strings.c -o $(OBJDIR)/strings.o
	$(CC) -c $(CFLAGS) $(INCLUDE) src/mpc.c -o $(OBJDIR)/mpc.o
	$(CC) $(OBJDIR)/*.o -ledit -lm -o $(OUTPUT)

clean:
	rm $(OBJDIR)/*.o $(OUTPUT)
