vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include -std=c++14
objects = MenuItem.o DinerMenuIterator.o main.o \
    DinerMenu.o Waitress.o PancakeHouseMenu.o PancakeHouseMenuIterator.o

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
