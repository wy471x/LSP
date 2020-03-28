EXE=sample-Hz sample-clock sample-time sample-gettimeofday sample-clock-gettime sample-sleep sample-usleep sample-nanosleep sample-relative-absolute sample-select-for-sleep sample-alarm sample-alarm-2 sample-timer-create-settime-gettime-getoverrun-delete
CC=gcc
CFLAGS=-Wall -W -O2 -g
LIBS=-lrt
all : $(EXE)

sample-Hz : sample-Hz.c
	$(CC) -o $@ $^
sample-clock : sample-clock.c
	$(CC) $(CFLAGS)	$(LIBS) -o $@ $^
sample-time : sample-time.c
	$(CC) -o $@ $^
sample-gettimeofday : sample-gettimeofday.c
	$(CC) -o $@ $^
sample-clock-gettime : sample-clock-gettime.c
	$(CC) -o $@ $^
sample-sleep : sample-sleep.c
	$(CC) -o $@ $^
sample-usleep : sample-usleep.c
	$(CC) -o $@ $^
sample-nanosleep : sample-nanosleep.c
	$(CC) -o $@ $^
sample-relative-absolute : sample-relative-absolute.c
	$(CC) -o $@ $^
sample-select-for-sleep : sample-select-for-sleep.c
	$(CC) -o $@ $^
sample-alarm : sample-alarm.c
	$(CC) -o $@ $^
sample-alarm-2 : sample-alarm-2.c
	$(CC) -o $@ $^
sample-timer-create-settime-gettime-getoverrun-delete : sample-timer-create-settime-gettime-getoverrun-delete.c
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean : 
	rm -f $(EXE)
