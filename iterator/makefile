vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include -std=c++14
objects = Iterator.o MenuItem.o DinerMenuIterator.o Menu.o main.o \
    DinerMenu.o Waitress.o

all: exec

exec: $(objects)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CPPFLAGS) -c $<

.PHONY: clean help
clean:
	rm exec $(objects)

help:
	@echo "make"
	@echo "make clean"
