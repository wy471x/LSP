EXE=test-fopen test-fdopen test-fcloseall test-fgetc test-ungetc test-fgets fgetc-implement-fgets fgetc-implement-fgets-2 test-fread test-fputc test-fputs sample-program
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
test-fread : test-fread.c
	$(CC) -o $@ $^
test-fgetc : test-fgetc.c
	$(CC) -o $@ $^
test-fputs : test-fputs.c
	$(CC) -o $@ $^
sample-program : sample-program.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
