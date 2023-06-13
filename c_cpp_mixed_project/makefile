

CC=gcc

CPP=g++
CFLAGS=-I.
DEPS=data.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

%.o: %.cpp $(DEPS)
	$(CPP) -c -o $@ $< $(CFLAGS)

Data: main.o Data.o App.o Data_wrap.o
	$(CPP) -o Data main.o Data.o App.o Data_wrap.o

.PHONY: clean

clean:
	del *.o *.exe

