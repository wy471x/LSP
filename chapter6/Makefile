EXE=test-sched_getaffinity test-sched_getscheduler test-sched_setscheduler test-sched_getparam test-sched_setparam test-sched_get_priority_min-max set_highest_priority test-sched_rr_get_interval test-getrlimit test-setrlimit
CC=gcc
all : $(EXE)

test-sched_getaffinity : test-sched_getaffinity.c
	$(CC) -o $@ $^
test-sched_getscheduler : test-sched_getscheduler.c
	$(CC) -o $@ $^
test-sched_setscheduler : test-sched_setscheduler.c
	$(CC) -o $@ $^
test-sched_getparam : test-sched_getparam.c
	$(CC) -o $@ $^
test-sched_setparam : test-sched_setparam.c
	$(CC) -o $@ $^
test-sched_get_priority_min-max : test-sched_get_priority_min-max.c
	$(CC) -o $@ $^
set_highest_priority : set_highest_priority.c
	$(CC) -o $@ $^
test-sched_rr_get_interval : test-sched_rr_get_interval.c
	$(CC) -o $@ $^
test-getrlimit : test-getrlimit.c
	$(CC) -o $@ $^
test-setrlimit : test-setrlimit.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
