EXE=sample-writev sample-readv sample-mmap sample-sortingbyinode sample-sortingbyphysicalblock
CC=gcc
all : $(EXE)

sample-writev : sample-writev.c
	$(CC) -o $@ $^
sample-readv : sample-readv.c
	$(CC) -o $@ $^
sample-mmap :sample-mmap.c
	$(CC) -o $@ $^
sample-sortingbyinode : sample-sortingbyinode.c
	$(CC) -o $@ $^
sample-sortingbyphysicalblock : sample-sortingbyphysicalblock.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
