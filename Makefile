FLOW_BINARY=./bin/flow

SOURCES_FILES=$(wildcard src/*.c)

$(FLOW_BINARY): $(SOURCES_FILES)
	gcc $^ -o $@
