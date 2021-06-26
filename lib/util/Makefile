all: libutil.a

CFLAGS += -I../../include/

util.o: util.c

libutil.a: util.o
	ar rv $@ $^

clean:
	rm -f util.o libutil.a
