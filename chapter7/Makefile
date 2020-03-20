EXE=sample-thread
CC=gcc
LIBS=-pthread
all : $(EXE)

sample-thread : sample-thread.c
	$(CC) -Wall -O2 $(LIBS) $^ -o $@

clean : 
	rm -f $(EXE)
