EXE=sample-writev sample-readv
CC=gcc
all : $(EXE)

sample-writev : sample-writev.c
	$(CC) -o $@ $^
sample-readv : sample-readv.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
