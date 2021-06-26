CC=gcc
CFLAGS+=-I./include
CFLAGS+=-L./lib/draw
CFLAGS+=-L./lib/shell
CFLAGS+=-L./lib/util

SOURCES_FILES=$(wildcard src/*.c)
LIBS=draw shell util
FLOW_BINARY=./bin/flow
OBJS:= src/flow.o src/handlers.o

USER_LIBS:= ./lib/draw/libdraw.a ./lib/shell/libshell.a ./lib/util/libutil.a

all: $(FLOW_BINARY)

./lib/draw/libdraw.a:
	make --directory=./lib/draw/

./lib/shell/libshell.a:
	make --directory=./lib/shell/

./lib/util/libutil.a:
	make --directory=./lib/util/

$(OBJS):
	make --directory=./src/

$(FLOW_BINARY): $(OBJS) $(USER_LIBS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ -ldraw -lshell -lutil -lreadline

clean:
	rm -f $(FLOW_BINARY)
