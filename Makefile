CC=gcc
CFLAGS=-I./include

SOURCES_FILES=$(wildcard src/*.c)
LIBS=readline
FLOW_BINARY=./bin/flow

all: $(FLOW_BINARY)

$(FLOW_BINARY): $(SOURCES_FILES)
	$(CC) $(CFLAGS) $^ -l$(LIBS) -o $@
