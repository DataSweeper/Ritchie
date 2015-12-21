all: sortl

sortl: rwl.o qsort.o main.o 
	gcc main.o rwl.o qsort.0-o sortl

qsort.o: qsort.c
	gcc -c qsort.c

main.o: main.c
	gcc -c main.c

rwl.o: rwl.c
	gcc -c rwl.c

