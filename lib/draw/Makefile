all: libdraw.a

draw.o: draw.c

libdraw.a: draw.o
	ar rv $@ $^

clean:
	rm -f draw.o libdraw.a
