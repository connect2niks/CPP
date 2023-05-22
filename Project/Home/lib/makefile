# Varibles

CC=gcc
IDIR=inc
LDIR=lib
CFLAGS=-I ../$(IDIR)
LFLAGS=-L ../$(LDIR)
DEPS=



# Rules

%.o: %.c $(DEPS)
	$(CC) -C -o $@ $< $(CFLAGS)
myApp: myApp.o
	$(CC) -o myApp myApp.o -l_mylib $(LFLAGS)
