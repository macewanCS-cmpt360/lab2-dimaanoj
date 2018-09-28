CC = gcc
CFLAGS = -g -Wall

all: q1 q2 q3 q7 shell

q1: q1.c
	$(CC) $(CFLAGS) -o $@ $^

q2: q2.c
	$(CC) $(CFLAGS) -o $@ $^

q3: q3.c
	$(CC) $(CFLAGS) -o $@ $^

q7: q7.c
	$(CC) $(CFLAGS) -o $@ $^

shell: shell.c
	$(CC) $(CFLAGS) -o $@ $^

run:
	./q1 & ./q2 & ./q3 & ./q7 & ./shell

clean:
	rm -f q1 q2 q3 q7 shell q2out.txt 
