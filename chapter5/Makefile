EXE=test-execl test-fork test-atexit test-on_exit test-wait my-system test-getsid test-getpgid create-daemon
CC=gcc
all : $(EXE)

test-execl :test-execl.c 
	$(CC) -o $@ $^
test-fork : test-fork.c
	$(CC) -o $@ $^
test-atexit : test-atexit.c
	$(CC) -o $@ $^
test-on_exit : test-on_exit.c
	$(CC) -o $@ $^
test-wait : test-wait.c
	$(CC) -o $@ $^
my-system : my-system.c
	$(CC) -o $@ $^
test-getsid : test-getsid.c
	$(CC) -o $@ $^
test-getpgid : test-getpgid.c
	$(CC) -o $@ $^
create-daemon : create-daemon.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
