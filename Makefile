CC=gcc
CFLAGS=-Wall
SRC=src/sysmon.c src/cpu.c src/meminfo.c src/disk.c
OUT=bin/sysmon

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f bin/sysmon
