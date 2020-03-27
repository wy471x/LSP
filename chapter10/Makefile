EXE=sample-sigint-handler sample-signal-handler sample-mapping-signal-to-string sample-sending-signal sample-raise sample-sigprocmask sample-sigqueue
CC=gcc
all : $(EXE)

sample-sigint-handler : sample-sigint-handler.c
	$(CC) -o $@ $^
sample-signal-handler : sample-signal-handler.c
	$(CC) -o $@ $^
sample-mapping-signal-to-string : sample-mapping-signal-to-string.c
	$(CC) -o $@ $^
sample-sending-signal : sample-sending-signal.c
	$(CC) -o $@ $^
sample-raise : sample-raise.c
	$(CC) -o $@ $^
sample-sigprocmask : sample-sigprocmask.c
	$(CC) -o $@ $^
sample-sigqueue : sample-sigqueue.c
	$(CC) -o $@ $^

clean :
	rm -f $(EXE)
