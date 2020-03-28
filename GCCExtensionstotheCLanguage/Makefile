EXE=sample-inline sample-pure
CC=gcc
all : $(EXE)

sample-inline : sample-inline.c
	$(CC) -o $@ $^
sample-pure : sample-pure.c
	$(CC) -o $@ $^

clean :
	rm -f $(EXE)
