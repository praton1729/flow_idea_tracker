OBJS:= flow.o handlers.o

all: $(OBJS)

CFLAGS += -I../include/

flow.o: flow.c
	gcc $(CFLAGS) -c flow.c -o flow.o

handlers.o: handlers.c
	gcc $(CFLAGS) -c handlers.c -o handlers.o

clean:
	rm -f flow.o handler.o
