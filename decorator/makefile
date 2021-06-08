vpath %.cc src
vpath %.h include
CC := g++

CPPFLAGS = -I include
objects := Beverage.o Decaf.o Espresso.o HouseBlend.o \
    Whip.o Soy.o Mocha.o DarkRoast.o Milk.o main.o

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
