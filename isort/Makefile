# _*_ Makefile _*_

CC=gcc
FLAGS= -Wall -g

all:  main.o arrays.o Ex2

Ex2: main.o arrays.o
	$(CC) $(FLAGS) main.o arrays.o -o Ex2
	
main.o: main.c arrays.h
	$(CC) $(FLAGS) -c main.c
arrays.o:  arrays.h
	$(CC) $(FLAGS) -c arrays.c

.PHONY: clean all

clean:
	 rm -f *.o Ex2 