EXE=test-fopen test-fdopen test-fcloseall test-fgetc test-ungetc test-fgets fgetc-implement-fgets fgetc-implement-fgets-2
CC=gcc
all : $(EXE)

test-fopen : test-fopen.c
	$(CC) -o $@ $^
test-fdopen : test-fdopen.c
	$(CC) -o $@ $^
test-fcloseall : test-fcloseall.c
	$(CC) -o $@ $^
test-fgetc : test-fgetc.c
	$(CC) -o $@ $^
test-ungetc : test-ungetc.c
	$(CC) -o $@ $^
test-fgets : test-fgets.c
	$(CC) -o $@ $^
fgetc-implement-fgets : fgetc-implement-fgets.c
	$(CC) -o $@ $^
fgetc-implement-fgets-2 : fgetc-implement-fgets-2.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
