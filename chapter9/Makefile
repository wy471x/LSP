EXE=sample-print-chars sample-sbrk sample-anonymous-mapping sample-mapping-dev-zero sample-mallopt sample-mallinfo sample-VLA
CC=gcc
all : $(EXE)

sample-print-chars : sample-print-chars.c
	$(CC) -o $@ $^
sample-sbrk : sample-sbrk.c
	$(CC) -o $@ $^
sample-anonymous-mapping : sample-anonymous-mapping.c
	$(CC) -o $@ $^
sample-mapping-dev-zero : sample-mapping-dev-zero.c
	$(CC) -o $@ $^
sample-mallopt : sample-mallopt.c
	$(CC) -o $@ $^
sample-mallinfo : sample-mallinfo.c
	$(CC) -o $@ $^
sample-VLA : sample-VLA.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
