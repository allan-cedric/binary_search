CC = gcc
CFLAGS = --std=c99 -Wall -Wextra -g
OBJS = main.o binary_search/binary_search.o
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJS)

main.o: main.c binary_search/binary_search.h
binary_search/binary_search.o: binary_search/binary_search.c \
binary_search/binary_search.h

clean:
	-rm -f $(OBJS) *~

purge: clean
	-rm -f $(EXEC)