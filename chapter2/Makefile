EXE=test-creat test-read test-write test-truncate test-select test-select-implement-sleep test-poll
CC=gcc
all : $(EXE)

test-creat : test-creat.c
	$(CC) -o $@ $^
test-read : test-read.c
	$(CC) -o $@ $^
test-write : test-write.c
	$(CC) -o $@ $^
test-truncate : test-truncate.c
	$(CC) -o $@ $^
test-select : test-select.c
	$(CC) -o $@ $^
test-select-implement-sleep: test-select-implement-sleep.c
	$(CC) -o $@ $^
test-poll :test-poll.c
	$(CC) -o $@ $^

clean :
	rm -f $(EXE)
