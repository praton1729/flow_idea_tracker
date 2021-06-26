all: libshell.a

CFLAGS += -I../../include/

shell.o: shell.c
	gcc $(CFLAGS) -c shell.c -o shell.o

libshell.a: shell.o
	ar rv $@ $^

clean:
	rm -f shell.o libshell.a
