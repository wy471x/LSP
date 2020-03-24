EXE=sample-stat sample-stat-2 is-on-physical-device sample-chmod sample-fchmod sample-chown sample-fchown sample-getcwd sample-get-current-dir-name sample-chdir sample-fchdir sample-find-file-in-dir sample-link sample-symlink
CC=gcc
all : $(EXE)

sample-stat : sample-stat.c
	$(CC) -o $@ $^
sample-stat-2 : sample-stat-2.c
	$(CC) -o $@ $^
is-on-physical-device : is-on-physical-device.c
	$(CC) -o $@ $^
sample-chmod : sample-chmod.c
	$(CC) -o $@ $^
sample-fchmod : sample-fchmod.c
	$(CC) -o $@ $^
sample-chown : sample-chown.c
	$(CC) -o $@ $^
sample-fchown : sample-fchown.c
	$(CC) -o $@ $^
sample-getcwd : sample-getcwd.c
	$(CC) -o $@ $^
sample-get-current-dir-name : sample-get-current-dir-name.c
	$(CC) -o $@ $^
sample-chdir : sample-chdir.c
	$(CC) -o $@ $^
sample-fchdir : sample-fchdir.c
	$(CC) -o $@ $^
sample-find-file-in-dir : sample-find-file-in-dir.c
	$(CC) -o $@ $^
sample-link : sample-link.c
	$(CC) -o $@ $^
sample-symlink : sample-symlink.c
	$(CC) -o $@ $^

clean : 
	rm -f $(EXE)
