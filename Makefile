all: lpin

lpin: lpin.o
	$(CC) $(CFLAGS) -o lpin lpin.o

lpin.o:	lpin.c
	$(CC) $(CFLAGS) -c lpin.c

clean:
	rm -f *.o lpin
