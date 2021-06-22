CC=gcc

CFLAGS=-I./include

FLOW_BINARY=./bin/flow

SOURCES_FILES=$(wildcard src/*.c)

all: $(FLOW_BINARY)

$(FLOW_BINARY): $(SOURCES_FILES)
	$(CC) $(CFLAGS) $^ -o $@
