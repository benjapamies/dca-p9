CC = gcc
OPT = -Wextra -Wall

programa: main.c
	$(CC) $(OPT) -o programa main.c

.PHONY = clean

clean:
	rm -f *.o
	rm -f *~
	rm -f programa
